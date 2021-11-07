#include "main.h"

/**
 * _print_reverse - Print a string in reverse.
 * @arg: String address.
 * Return: integer.
 */

int _print_reverse(va_list arg)
{
	char *str = va_arg(arg, char *);
	int i = 0, counter = 0;

	while (str[i])
		i++;
	i--;
	for (; i >= 0; i--)
	{
		_putchar(str[i]);
		counter++;
	}
	return (counter);
}
