#include "main.h"

/**
 * _print_rot - Prints a string rot13.
 * @arg: String address.
 * Return: integer.
 */

int _print_rot(va_list arg)
{
int i, j, count = 0;
char a[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
char b[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
char *s = va_arg(arg, char *);

if (s == NULL)
s = "(NULL)";
for (i = 0; s[i]; i++)
{
for (j = 0; j < 52; j++)
{
if (s[i] == a[j])
break;
}
if (s[i] == a[j])
{
_putchar(b[j]);
count++;
}
else
{
_putchar(s[i]);
count++;
}
}
return (count);
}
