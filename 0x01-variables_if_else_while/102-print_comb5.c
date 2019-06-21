#include<stdio.h>
#include<stdlib.h>
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
	int k;
	int x;

	for (ch = 0; ch <= 9; ch++)
	{
		for (j = 0; j <= 9; j++)
		{
			for (i = ch; i <= 9; i++)
			{
				if (ch == i)
				{
					x = j + 1;
				}
				else
				{
					x = 0;
				}
				for (k = x; k <= 9; k++)
				{	putchar (ch + '0');
					putchar (j + '0');
					putchar (' ');
					putchar (i + '0');
					putchar (k + '0');
					if (ch != 9 || j != 8 || i != 9 || k != 9)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
