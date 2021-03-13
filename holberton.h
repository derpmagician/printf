#ifndef HOLBERTON_H
#define HOLBERTON_H
#include <stdarg.h>

/**
  * struct specifiers - Struct specifiers
  * @specifier: The conversion specifier
  * @f: The function pointer
  */
typedef struct fmt
{
	char fmt;
	int (*fn)(va_list);
} fmt_t;

int _putchar(char c);
int _printf(const char *format, ...);
int _print_int_binary(va_list args);
void _recursion_int_binary(int a);

#endif /* _HOLBERTON */
