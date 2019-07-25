#include <stdio.h>
#include <stdlib.h>

/**
 * main - searchs for an integer
 *@argc: number of arguments
 *@argv: array with arguments
 *
 * Return: no return
 */
int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	if (atoi(argv[1]) < 0)
	{
		printf("Error\n");
		exit(2);
	}
	return (0);
}
