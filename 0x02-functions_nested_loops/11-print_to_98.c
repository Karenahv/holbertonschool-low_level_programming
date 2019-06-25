#include "holberton.h"
#include <stdlib.h>
#include<stdio.h>

/**
 * print_to_98 - Entry point
 *@n: number from count
 * Return: all natural numbers from n to 98
 */
void print_to_98(int n)
{
        n = n - 1;
	while(n != 98)
	{
		if (n < 98)
		{
			n = n + 1;
			printf("%d", n);
		}
		else
		{
			n = n - 1;
			printf("%d", n);
		}
		if(n !=98)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
}
