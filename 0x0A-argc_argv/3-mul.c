#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 *@argc: number of arguments
 *@argv: string with arguments
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int multi;

	(void)argv;
	if (argc == 3)
	{
		multi = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", multi);
	}
	else
	{
		puts("Error");
	}
	return (0);
}
