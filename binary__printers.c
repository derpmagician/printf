#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
  * _recursion_int_binary - Prints a binary
  * @a: integer to print
  *
  * Return: Nothing
  */
void _recursion_int_binary(int a)
{
	unsigned int t;

	t = a;
	if (t / 2)
		_recursion_int_binary(t / 2);
	_putchar(t % 2 + '0');
}
