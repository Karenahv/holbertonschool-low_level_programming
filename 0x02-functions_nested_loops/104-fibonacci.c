#include <stdlib.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	unsigned long fib1;
	unsigned long fib2;
	unsigned long fib3;
	unsigned long c;
	unsigned long a;
	unsigned long d;
	unsigned long b;
	unsigned long sum1;
	unsigned long sum2;
	unsigned long sum0;
	unsigned long i;
	int n;

	n = 1;
	fib1 = 1;
	fib2 = 1;
	printf("%lu, ", fib2);
	while (n <= 97)
	{
		fib3 = fib1 + fib2;
		printf("%lu", fib3);
		n++;
		fib1 = fib2;
		fib2 = fib3;
		if (n > 90)
		{
			c = fib2 % (10 ^ 11);
			a = (fib2 - c) / (10 ^ 11);
			d = fib3 % (10 ^ 11);
			b = (fib3 - b) / (10 ^ 11);
			sum0 = a + b;
			i = (sum0 % (10 ^ 11)) / (10 ^ 11);
			sum1 = (a + b) - (i * (10 ^ 11));
			sum2 = (c + d) + i;
			printf("%lu%lu", sum2, sum1);
			a = b;
			c = d;
			b = sum1;
			d = sum2;
		}
		if (n != 98)
			printf(", ");
		putchar('\n');
	}
	return (0);
}
