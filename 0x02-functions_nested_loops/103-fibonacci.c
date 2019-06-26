#include <stdlib.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int fib1;
	int fib2;
	int fib3;
	int n;

	int sum;
	int o;

	n = 1;
	fib1 = 1;
	fib2 = 2;
	sum = 2;
	o = 2;

	while (n <= 30)
	{
		fib3 = fib1 + fib2;
		n++;
		fib1 = fib2;
		fib2 = fib3;
		if (fib3 % o == 0)
			sum = sum + fib3;
	}
	printf("%d\n", sum);
	return (0);
}
