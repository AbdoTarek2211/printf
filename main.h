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
#endif
