#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <limits.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

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

int _printf(const char *format, ...);
int _putchar(char c);

int _print_format(const char *format, va_list args);
int _print_spec(char format, va_list args);
int _print_invalid_spec(char prev_format, char format, int count);
int _validate_char(char _type);

int _print_a_char(va_list args);
int _print_a_string(va_list args);

int _print_a_integer(va_list args);

int _print_int_binary(va_list args);
int print_octal(va_list args);
int print_hex(va_list args);
int print_caps_HEX(va_list args);

int _print_rot(va_list arg);
int _print_reverse(va_list arg);
int _print_String(va_list arg);

#endif /* MAIN_H */
