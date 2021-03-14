#include "holberton.h"
#include <stdlib.h>

/**
 * _print_address - Print a address.
 * @arg: String address.
 * Return: Integer.
 */

int _print_address(va_list arg)
{
    char *str = va_arg(arg, char *);
    int i = 0;

    if (str == NULL)
    str = "(null)";
    for (; str[i]; i++)
    _putchar(str[i]);
    return (i);
}
