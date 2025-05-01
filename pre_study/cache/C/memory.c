#include "memory.h"
#include <stdio.h>
#include <stdlib.h>

unsigned char physical_memory[MEMORY_SIZE];

void load_memory_from_file(){
    FILE *file = fopen("memory", "r+");
    fread(physical_memory, 1, MEMORY_SIZE, file);
    fclose(file);
}

void write_file(){
    FILE *file = fopen("memory", "w");
    if (file == NULL)
    {
        perror("failed to open file");
        exit(1);
    }

    for(int i = 0; i < MEMORY_SIZE; i++){
        physical_memory[i] = (unsigned char)(i%256);
    }
    fwrite(physical_memory, 1, MEMORY_SIZE, file);

    fclose(file);
}