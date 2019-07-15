#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/**
 * main - Entry point
 *@argc: number of arguments
 *@argv: string with arguments
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	long int sum;
	int i;
	int j;

	(void)argv;
	sum = 0;
	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			for (j = 0; argv[i][j] != '\0'; j++)
			{
				if (!(isdigit(argv[i][j])))
				{
					printf("Error\n");
					return (1);
				}
			}
			sum += atoi(argv[i]);
		}
	}
	printf("%ld\n", sum);
	return (0);
}
