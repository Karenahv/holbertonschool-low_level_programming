#include<stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int ch;
	int j;
	int i;

	for (ch = 0; ch <= 7; ch++)
	{
		for (j = 1; j <= 8; j++)
		{
			for (i = 2; i <= 9; i++)
			{
				if (ch < j)
				{
					if (j < i)
					{
					putchar (ch + '0');
					putchar (j + '0');
					putchar (i + '0');

					if (ch != 7 || j != 8 || i != 9)
					{
						putchar(',');
						putchar(' ');
					}
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
