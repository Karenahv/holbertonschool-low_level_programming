#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H
#include <stdarg.h>

int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

/**
 * struct types_arguments - Struct op
 *
 * @t: The operator
 * @f: The function associated
 */
typedef struct types_arguments
{
	char t;
	void (*f)(va_list va);
} types;
void t_char(va_list va);
void t_integer(va_list va);
void t_float(va_list va);
void t_string(va_list va);
#endif
