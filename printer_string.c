#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
  * _print_a_char - Prints a char
  * @args: A list of variadic arguments
  *
  * Return: The length of the character
  */
int _print_a_char(va_list args)
{
	_putchar(va_arg(args, int));
	return (1);
}

/**
  * _print_a_string - Prints a string
  * @args: A list of variadic arguments
  *
  * Return: The length of the string
  */
int _print_a_string(va_list args)
{
	char *arg = va_arg(args, char *);
	int i = 0;

	if (arg != NULL)
	{
		while (arg[i])
		{
			_putchar(arg[i]);
			i++;
		}

		return (i);
	}

	_putchar('(');
	_putchar('n');
	_putchar('u');
	_putchar('l');
	_putchar('l');
	_putchar(')');
	return (6);
}
