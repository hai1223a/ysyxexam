#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <elf.h>
#include <assert.h>

#define Assert(expr, __format, ...) \
    do { \
        if(!expr) { \
            printf(__format, ##__VA_ARGS__); \
            assert(0); \
        } \
    } while(0)

void read_elf_symbols(const char *elf_file) {
    FILE *file = fopen(elf_file, "rb");
    if (!file) {
        perror("Failed to open ELF file");
        return;
    }

    // 读取 ELF 文件头
    Elf32_Ehdr ehdr;
    fread(&ehdr, 1, sizeof(ehdr), file);

    // 检查 ELF 魔数
    if (memcmp(ehdr.e_ident, ELFMAG, SELFMAG) != 0) {
        printf("Not a valid ELF file\n");
        fclose(file);
        return;
    }

    // 定位到节头表
    fseek(file, ehdr.e_shoff, SEEK_SET);

    // 读取节头表
    Elf32_Shdr *sh_table = malloc(ehdr.e_shentsize * ehdr.e_shnum);
    fread(sh_table, ehdr.e_shentsize, ehdr.e_shnum, file);

    // 找到字符串表节（.strtab）
    const char *strtab = NULL;
    size_t strtab_size = 0;
    for (int i = 0; i < ehdr.e_shnum; i++) {
        if (sh_table[i].sh_type == SHT_STRTAB && i != ehdr.e_shstrndx) {
            strtab_size = sh_table[i].sh_size;
            strtab = malloc(strtab_size);
            fseek(file, sh_table[i].sh_offset, SEEK_SET);
            fread((void *)strtab, 1, strtab_size, file);
            break;
        }
    }

    // 找到符号表节（.symtab）
    for (int i = 0; i < ehdr.e_shnum; i++) {
        if (sh_table[i].sh_type == SHT_SYMTAB) {
            size_t symtab_size = sh_table[i].sh_size;
            size_t symtab_entry_count = symtab_size / sh_table[i].sh_entsize;

            Elf32_Sym *symtab = malloc(symtab_size);
            fseek(file, sh_table[i].sh_offset, SEEK_SET);
            fread(symtab, sh_table[i].sh_entsize, symtab_entry_count, file);

            // 遍历符号表
            printf("Symbol Table (Section %d):\n", i);
            for (int j = 0; j < symtab_entry_count; j++) {
                if (ELF32_ST_TYPE(symtab[j].st_info) == STT_FUNC) {
                    const char *sym_name = &strtab[symtab[j].st_name];
                    printf("  Symbol: %s, Value: 0x%x, Size: %d\n",
                           sym_name, symtab[j].st_value, symtab[j].st_size);
                }
            }

            free(symtab);
            break;
        }
    }

    // 清理资源
    free((void *)strtab);
    free(sh_table);
    fclose(file);
}

int main(int argc, char *argv[]) {
    if (argc < 2) {
        printf("Usage: %s <elf_file>\n", argv[0]);
        return 1;
    }

    read_elf_symbols(argv[1]);
    return 0;
}