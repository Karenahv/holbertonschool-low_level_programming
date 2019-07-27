#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - prints numbers, followed by a new line.
 * @separator: string to be printed between numbers
 * @n: num of int
 * Return: ntg
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list valist;
	unsigned int i;

	va_start(valist, n);
	if (*separator != '\0')
	{
		for (i = 0; i < n; i++)
		{
			if (i != (n - 1))
				printf("%d%c", va_arg(valist, unsigned int), *separator);
			else
				printf("%d\n", va_arg(valist, unsigned int));
		}
		va_end(valist);
	}
}
