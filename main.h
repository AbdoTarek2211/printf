#ifndef Main_H
#define Main_H
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
typedef struct convention
{
char str;
int (*f)(va_list);
} convention_s;
/*prototypes*/
int _printf(const char *format, ...);
int get_function(char s, va_list args);
int _putchar(char c);
/*Conversion prototypes*/
int print_char(va_list args);
int print_string(va_list args);
int print_digit(va_list args);
int print_mod(va_list args);
int print_rev_string(va_list args);
#endif
