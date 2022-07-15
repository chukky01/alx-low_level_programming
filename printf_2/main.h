#ifndef HEADER_MAIN
#define HEADER_MAIN


#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>


int _putchar(char c);
void _puts(char *str);
int _strlen(char *s);
int _printf(const char *format, ...);
char *convert_to(char representation[], unsigned int num, int base);
int function_manager(char c, va_list arg);
int _switch(char c, va_list arg);
int print_character(va_list arg);
int print_sign(va_list arg, int base);
int print_unsign(va_list arg, int base);
int print_string(va_list arg);
int print_ptr(va_list arg);
int print_rot13(va_list arg);
int print_rev(va_list arg);
int print_base16_upper_lower(va_list arg, char *representation);
int loop_format(va_list arg, const char *string);
int call_function_manager(char aux, va_list arg);
int check_percent(int *flag, char aux);
void strapd(char buf[], char, int *);
void oct_f(char buf[], unsigned int j, int *);
void hex_f(char buf[], unsigned int j, char s, int *);
void lim_itoa(char buf[], char a[], unsigned int n[], unsigned int j, int *);
void add_zeros(char buf[], int n, int p, int *);



/**
 * struct identifierStruct - structure definition of a printTypeStruct
 * @indentifier: type
 * @printer: function to print
 */
typedef struct identifierStruct
{
char *indentifier;
int (*printer)(va_list);
} identifierStruct;


#endif
