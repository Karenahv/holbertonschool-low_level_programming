#include "holberton.h"

/**
 * jack_bauer - Entry point
 *
 *not return
 */
void jack_bauer(void)
{
	int ch;
	int j;
	int i;
	int k;

	for (ch = 0; ch <= 2; ch++)
	{
		for (j = 0; j <= 9; j++)
		{
			if (ch == 2 && j == 4)
				break;
			for (i = 0; i <= 5; i++)
			{
				for (k = 0; k <= 9; k++)
				{
					_putchar (ch + '0');
					_putchar (j + '0');
					_putchar (':');
					_putchar (i + '0');
					_putchar (k + '0');
					_putchar ('\n');
				}
			}
		}
	}
}
