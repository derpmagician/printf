#include "main.h"

/**
  * _print_int_binary - Prints a int converted to binary
  * @args: A list of variadic arguments
  *
  * Return: The number of printed digits
  */
int _print_int_binary(va_list args)
{
	unsigned int n, count = 0, i = 0;
	int arr[100];

	n = va_arg(args, int);
	if (n < 2)
	{
		_putchar(n + '0');
		count = 1;
	}
	else if (n >= 2)
	{
		while (n > 0)
		{
			arr[i] = n % 2;
			n /= 2;
			i++;
		}
	}
	while (i--)
	{
		_putchar(arr[i] + '0');
		count++;
	}
	return (count);
}