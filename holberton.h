#ifndef HOLBERTON_H
#define HOLBERTON_H
#include <stdarg.h>

/**
  * struct specifiers - Struct specifiers
  * @specifier: The conversion specifier
  * @f: The function pointer
  */
typedef struct specifiers
{
	char *specifier;
	int (*f)(va_list args);
} spc_dt;

int _putchar(char c);
int _printf(const char *format, ...);

int _print_a_char(va_list args);
int _print_a_string(va_list args);
int _print_format(const char *format, va_list args);
int _print_spec(char format, va_list args);
int _print_invalid_spec(char prev_format, char format, int count);
int _print_a_integer(va_list args);
void _recursion_integer(int a);
int _print_int_binary(va_list args);
void _recursion_int_binary(int a);
int _print_int_octal(va_list ap);
int _recursion_int__octal(unsigned int num, int *count);
int _print_int_unsigned(va_list ap);
int _recursion_int_unsigned(unsigned int num, int *count);

int _print_reverse(va_list arg);
int _print_rot(va_list arg);
int _print_String(va_list arg);

int _validate_char(char _type);

#endif /* _HOLBERTON */
