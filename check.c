#include <stdio.h>
#include <stdbool.h>
#include "check.h"


bool check(char* op)
{
    printf("There are %d arguments\n", argc);

    for (int val = 1; val < argc; val++)
    {
        printf("%s\n", argv[val]);
    }
    return true;
}