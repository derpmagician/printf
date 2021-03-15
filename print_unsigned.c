#include "holberton.h"

/**
 * _print_int__unsigned - prints an unsigned int from va_list
 * @ap: va_list object from calling function
 * Return: integer count of characters printed
 */
int _print_int_unsigned(va_list ap)
{
	int *count_ptr;
	unsigned int num;

	count_ptr = malloc(sizeof(*count_ptr));

	if (!count_ptr)
		exit(-1);

	*count_ptr = 0;
	num = va_arg(ap, unsigned int);

	(*count_ptr) = _recursion_int_unsigned(num, count_ptr);

	return (*count_ptr);
}

/**
 * _recursion_int_unsigned - print the digits recursively
 * @num: next unsigned int in the va_arg list
 * @count: pointer to integer count digits
 * Return: pointer to integer count of character printed
 */
int _recursion_int_unsigned(unsigned int num, int *count)
{
	if (num / 10)
		print_unsigned_digit(num / 10, count);

	(*count) += _putchar((num % 10) + '0');
	return (*count);
}
