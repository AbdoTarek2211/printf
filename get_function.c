#include <stdlib.h>
#include "main.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * get_function - function specifiers.
 * @convention_spec: Conversion specifiers.
 * @args: arguments.
 *
 * Return: char count.
 */
int get_function(char convention_spec, va_list args)
{
int x = 0;
int counter = 0;
convention_s convs[] = {
{'s', print_string},
{'%', print_mod},
{'d', print_digit},
{'i', print_digit},
{'r', print_rev_string},
{0, NULL}
};
while (convs[x].str)
{
if (convs[x].str == convention_spec)
{
counter += convs[x].f(args);
x++;
}
}
if (count_fun == 0)
{
counter += _putchar('%');
counter += _putchar(convention_spec);
}
return (counter);
}
