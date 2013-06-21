#include <stdio.h>
#include <stdlib.h>
#include "List.h"

// Add some message here

/**
 * This main is for testing functions and modules
 */
int main()
{
    List *list = NULL;

    listAppend(&list, (void *)2);
    listAppend(&list, (void *)3);
    listAppend(&list, (void *)4);
    listDump(list);

    printf("hi there my dear friend\n");

    printf("Hello world!\n");
    return 0;
}
