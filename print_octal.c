#include "holberton.h"

/**
 * _print_int_octal - prints an unsigned int octal from va_list
 * @ap: va_list object from calling function
 * Return: integer count of characters printed
 */
int _print_int_octal(va_list ap)
{
	int *count_ptr;
	unsigned int num;

	count_ptr = malloc(sizeof(*count_ptr));

	if (!count_ptr)
		exit(-1);

	*count_ptr = 0;
	num = va_arg(ap, unsigned int);

	(*count_ptr) = _recursion_int__octal(num, count_ptr);

	return (*count_ptr);
}

/**
 * _recursion_int_octal - print the digits recursively
 * @num: next usigned octal int in the va_arg list
 * @count: pointer to integer count digits
 * Return: pointer to integer count of character printed
 */
int _recursion_int__octal(unsigned int num, int *count)
{
	if (num / 8)
		print_digit_octal(num / 8, count);

	(*count) += _putchar((num % 8) + '0');
	return (*count);
}
