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

	for (ch = 0; ch <= 8; ch++)
	{
		for (j = 0; j <= 9; j++)
		{
			if (j == 0)
				j = j + ch + 1;
			putchar (ch + '0');
			putchar (j + '0');
			if (ch != 8 || j != 9)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
