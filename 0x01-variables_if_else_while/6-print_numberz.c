#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
*main - print all alphabets function.
*
*Return: (success)
*/
int main(void)
{
	int n = 0;

	while (n < 10)
	{
		putchar((char)n);
		n++;
	}
	putchar('\n');

	return (0);
}
