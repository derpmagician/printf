#include "main.h"

/**
 * recursive_hexadecimal - Converts decimal to uppercase hexadecimal
 * @n: The number to be converted
 *
 * Return: The number of digits printed
 */
int	recursive_hexadecimal(unsigned int n)
{
	int counter = 0;
	char hex_digits[] = "0123456789abcdef";

	if (n >= 16)
		counter += recursive_hexadecimal(n / 16);
	counter += _putchar(hex_digits[n % 16]);
	return (counter);
}

/**
 * print_hex - Converts decimal to uppercase hexadecimal
 * @args: The number of args to be converted
 *
 * Return: The number of digits printed
 */
int print_hex(va_list args)
{
	unsigned int n = va_arg(args, int);

	return (recursive_hexadecimal(n));
}

/**
 * print_caps_HEXADECIMAL - Converts decimal to uppercase hexadecimal
 * @n: The number to be converted
 *
 * Return: The number of digits printed
 */
int	recursive_caps_HEXADECIMAL(unsigned int n)
{
	int counter = 0;
	char hex_digits[] = "0123456789ABCDEF";

	if (n >= 16)
	{
		counter += recursive_caps_HEXADECIMAL(n / 16);
	}
	counter += write(1, &hex_digits[n % 16], 1);
	return (counter);
}

/**
 * print_caps_HEX - Converts decimal to uppercase hexadecimal
 * @args: The number of list to be converted
 *
 * Return: The number of digits printed
 */
int print_caps_HEX(va_list args)
{
	unsigned int n = va_arg(args, int);

	return (recursive_caps_HEXADECIMAL(n));
}