#include "variadic_functions.h"
#include<stdarg.h>
#include<stdlib.h>
#include<stdio.h>


void print_strings(const char *seperator, const unsigned int n, ...)
{
    va_list list;
    unsigned int i;
    char *c;
    va_start(list, n);

    for(i = 0; i < n; i++)
    {
        c = va_arg(list, char*);
        if (c !=NULL)
                printf("%s", c);
        else
                printf("(nil)");

        if (i != n - 1 && seperator != NULL)
                printf("%s", seperator);
    }
    va_end(list);

    putchar('\n');
}
