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
	char c = 'a';
	char C = 'A';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}

	while (C <= 'Z')
	{
		putchar(C);
		C++;
	}
	putchar('\n');

	return (0);
}
