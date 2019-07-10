#include "holberton.h"
/**
 *comparar - function that returns the power of number
 *@n: original number
 *@y: counter to compare multiplication
 *
 *Return: square root
 */
int comparar(int n, int y)
{
	int count = 0;

	if (y <= n)
	{
		if (n % y == 0)
			count++;
		return (count + comparar(n, y + 1));
	}
	return (count);
}
/**
*is_prime_number - return 1 if is number prime
*@n: number to evaluate
*Return: 1 or 0
*/
int is_prime_number(int n)
{
	if (comparar(n, 1) == 2)
		return (1);
	else
		return (0);
}
