#include <stdlib.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
long double main(void)
{
	long double fib1;
	long double fib2;
	long double fib3;
	int n;

	long double sum;

	n = 1;
	fib1 = 1;
	fib2 = 2;
	sum = 3;

	while (n <= 30)
	{
		fib3 = fib1 + fib2;
		n++;
		fib1 = fib2;
		fib2 = fib3;
		sum = sum + fib3;
	}
	printf("%.Lf\n", sum);
	return (sum);
}
