#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: a Phrase
 */
int main(void)
{
	int i;
	double d;
	char c;
	long long l;
	float f;
	long int li;

	printf("Size of a char is: %d byte(s) \n", sizeof(c));
	printf("Size of an int: %d byte(s) \n", sizeof(i));
	printf("Size of an long int: %d byte(s) \n", sizeof(li));
	printf("Size of a long long int: %d byte(s) \n", sizeof(l));
	printf("Size of a float is: %d byte(s) \n", sizeof(f));
	return (0);
}
