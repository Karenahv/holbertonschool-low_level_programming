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
	int monedas;
	int j;
	int count;
	int coins[5] = {25, 10, 5, 2, 1};

	count = 0;
	monedas = 0;

	if (argc == 2)
	{
		for (j = 0; j <= 4; j++)
		{
			if (atoi(argv[1]) >= coins[j])
			{
				monedas = atoi(argv[1]) / coins[j];
				count = atoi(argv[1]) % coins[j];
				break;
			}
		}

		for (j = 0; j <= 4; j++)
		{
			if (count >= coins[j])
			{
				monedas++;
				count = count - coins[j];
				j = 0;
			}
		}
	} else
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", monedas);
	return (0);
}
