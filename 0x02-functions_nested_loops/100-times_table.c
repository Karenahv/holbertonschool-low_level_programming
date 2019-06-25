#include "holberton.h"

/**
 * print_times_table - Entry point
 *@n: n times table
 * Return: n times table
 */
void print_times_table(int n)
{
	int ch;
	int j;
	int c;

	if (n <= 15 && n >= 0){
		for (ch = 0; ch <= n; ch++){
			for (j = 0; j <= n; j++){
				c = ch * j;
				if (c > 99 && c < 1000){
					_putchar('0' + (c/100));
					_putchar('0' + ((c/10) % 10));
					_putchar('0' + (c%10));
				} else{
					if (c > 9 && c <= 99){
						_putchar(' ');
						_putchar((c/10) + '0');
						_putchar((c%10) + '0');
					} else{
						if (j == 0){
							_putchar(c + '0');
						} else{
							_putchar(' ');
							_putchar(' ');
							_putchar(c + '0');
						}
					}
				}
			        if (j != n){
				       _putchar(',');
				       _putchar(' ');
				 }
			}
			_putchar ('\n');
		}
	}
}
