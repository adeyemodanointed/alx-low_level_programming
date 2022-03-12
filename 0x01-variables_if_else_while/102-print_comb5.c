#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
*main - prints all possible combinations of two two-digit numbers function.
*
*Return: (success)
*/
int main(void)
{
	int n;
	int m;
	int i;
	int j;

	for (n = 0; n <= 9; n++)
	{
		for (m = 0; m < 9; m++)
		{
			for (i = n; i <= 9; i++)
			{
				for (j = 0; j <= 9; j++)
				{
					if (n * 10 + m < i * 10 + j)
					{
					putchar(n % 10 + '0');
					putchar(m % 10 + '0');
					putchar(' ');
					putchar(i % 10 + '0');
					putchar(j % 10 + '0');
					if (n != 9 && m != 8)
					{
						putchar(',');
						putchar(' ');
					}
					}
				}
			}
		}
	}

	putchar('\n');

	return (0);
}
