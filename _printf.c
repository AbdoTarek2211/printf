#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _printf - prints all strings
 * @format: the kind of format c for char s for string i for int f for
 * float.
 * Return: a string with tha arguments.
 */
int _printf(const char *format, ...)
{
va_list list;
char *str;
unsigned int i = 0;
unsigned int x = 0;
va_start(list, format);
for (i = 0; format && format[i] != '\0'; i++)
{
if (format[i] != '%')
{
x++;
}
else
++i;
x++;
}
va_end(list);
return (x);
}
