/* memcpy example */
#include <stdio.h>
#include <string.h>

struct {
    char name[40];
    int age;
} person, person_copy;

int main ()
{
    char myname[] = "Pierre de Fermat";

    /* using memcpy to copy string: */
    memcpy ( person.name, myname, strlen(myname)+1 );
    person.age = 46;
    /* using memcpy to copy structure: 源地址和目的地址没有重合*/
    memcpy ( &person_copy, &person, sizeof(person) );
    printf ("person_copy: %s, %d \n", person_copy.name, person_copy.age );
    return 0;
    // 程序输出结果：person_copy: Pierre de Fermat, 46
}