#include "main.h"

/**
* _print_String - Print a string
* @arg: String address
* Return: integer
*/

int _print_String(va_list arg)
{

char *str = va_arg(arg, char *);
int c, i = 0;
if (str == NULL)
str = "(null)";
for (c = 0; str[c]; c++)
{
if (str[c] < 32 || str[c] >= 127)
{
_putchar(92);
_putchar(120);
}
else
{
_putchar(str[c]);
i++;
}
}
return (i);
}
