#include "holberton.h"

/**
 * print_number - Entry point
 *@n: the integer to print
 * Return: no return
 */
void print_number(int n)
{
	int f;
	int l;
	int ff;
	int fl;
	int lf;
	int ll;

	f = n % (100);
	l = (n - f) / (100);
	ff = f / 10;
	fl = f % 10;
	lf = l / 10;
	ll = l % 10;
	if (n > 0 && n < 100)
	{
		_putchar(ff + '0');
		_putchar(fl + '0');
	}
	if (n >= 100 && n < 1000)
	{
		_putchar(ll + '0');
		_putchar(lf + '0');
		_putchar(fl + '0');
	}
	if (n >= 1000 && n < 10000)
	{
		_putchar(lf + '0');
		_putchar(fl + '0');
		_putchar(ff + '0');
		_putchar(fl + '0');
	}
	if (n == 0)
		_putchar(ff + '0');


}
