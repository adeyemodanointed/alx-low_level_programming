#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
*main - print all numbers combination function.
*
*Return: (success)
*/
int main(void)
{
	int n;
	int m;

	for (n = 0; n < 9; n++)
	{
		for (m = n + 1; m <= 9; m++)
		{
			putchar(n % 10 + '0');
			putchar(m % 10 + '0');
			if (n != 8)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');

	return (0);
}
