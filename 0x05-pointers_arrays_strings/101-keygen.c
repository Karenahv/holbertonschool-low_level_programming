#include <stdio.h>

/**
* main - Entry point
*@n: the integer to print
 * Return: no return
 */
 unsigned long checksum(char *p)
 {
	 unsigned long suma = 0;
	 while (*p != 0)
	 {
                suma += *p;
                p++;
	 }
	 return suma;
	 }

int main(int c, char *v[])
{
	unsigned long suma;

	if (c < 2)
	{
		printf("usage %s password", v[0]);
		return (1);
	}
        else
	{
		suma = checksum(v[1]);
		printf("%lu, suma");

		if( suma != 2772)
		{
			puts("wrong password");
			return (1);
		}
                else
			puts(v[1]);
        }
        return 0;
}
