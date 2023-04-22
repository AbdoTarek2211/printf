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
while (format && format[i] != '\0')
{
switch (format[i])
{
case 'c':
while (format[i] != '\0')
{
x++;
}
break;
case 's':
str = va_arg(list, char *);
while (*str)
{
x++;
str++;
}
case '%':
reutrn (x++);
}
i++;
va_end(list);
return (x);
}
