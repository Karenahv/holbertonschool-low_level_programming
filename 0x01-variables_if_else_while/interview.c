#include <stdio.h>

int main ()
{
	int i;
	int j;
	int k;
	int l;
	int x;


	for (i = 0; i<= 9; i++)
	{
		for (j = 0; j<= 9; j++)
		{
			for (k = j; k <=9; k++)
			{
				if (k == i)
					x = j +1;
				else 
					x = 0;
				for (l = x; l <= 9; l++)
				{
					putchar(i + '0');
					putchar(j + '0');
					putchar(' ');
					putchar(k + '0');
					putchar(l + '0');
				  if (i != 9 || j != 8 || k != 9 || l != 9)
				  {
					  putchar (',');
					  putchar (' ');
				  }
				}
			}
		}


	 }
	putchar ('\n');
        return (0);
}









