#include "main.h"
#include <stdio.h>
#include <unistd.h>
/**
 * _printf - prints all strings
 * @format: the kind of format c for char s for string i for int f for
 * float.
 * Return: a string with tha arguments.
 */
int _printf(const char *format, ...)
{
va_list list;
int i = 0, count = 0, char_count;
va_start(list, format);

while (format[i])
{
char_count = 0;
if (format[i] == '%')
{
if (!format[i + 1] || (format[i + 1] == ' ' && !format[i + 2]))
{
count = -1;
break;
}
char_count += get_function(format[i + 1], list);
if (count_fun == 0)
count += _putchar(format[i + 1]);
if (char_count == -1)
count = -1;
i++;
}
else
{
if (count == -1)
_putchar(format[i]);
else
count += _putchar(format[i]);
}
i++;
if (count != -1)
count += char_count;
}
va_end(list);
return (count);
}
