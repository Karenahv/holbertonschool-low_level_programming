#include "holberton.h"

/**
 * times_table - Entry point
 *
 * Return: prints the 9 times table
 */
void times_table(void)
{
	int ch;
	int j;
	int c;

	for (ch = 0; ch <= 9; ch++)
	{
		for (j = 0; j <= 9; j++)
		{
			c = ch * j;
			if (c > 9)
			{
				_putchar((c / 10) + '0');
				_putchar((c % 10) + '0');
			} else
			{
				if (j == 0)
				{
					_putchar(c + '0');
				}
				else
				{
					_putchar(' ');
					_putchar(c + '0');
			}
			}
			if (j != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar ('\n');
	}
}
