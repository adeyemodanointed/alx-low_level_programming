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
	char n = '0';

	while (n <= '9')
	{
		putchar(n);
		n++;
	}
	putchar('\n');

	return (0);
}
