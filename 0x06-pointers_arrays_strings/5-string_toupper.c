#include "main.h"

char *string_toupper(char * str)
{
    int i;
    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] <= 'z' && str[i >= 'a'])
            str -= 32;

    }

    return (str);        
}
