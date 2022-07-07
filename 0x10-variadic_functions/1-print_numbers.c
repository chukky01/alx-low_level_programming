#include "variadic_functions.h"
#include<stdarg.h>
#include<stdlib.h>
#include<stdio.h>

void print_numbers(const char *seperator, const unsigned int n, ...)
{
    va_list list;
    unsigned int i;

    va_start(list, n);

    for (i = 0; i < n; i++)
    {
        printf("%i", va_arg(list, int));
        if(i != n - 1 && seperator != NULL)
                printf("%s", seperator);
    }
    va_end(list);

    putchar('\n');
}
