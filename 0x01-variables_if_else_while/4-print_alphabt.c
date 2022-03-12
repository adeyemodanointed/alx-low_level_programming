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

	while (c <= 'z')
	{
		if (c != 'e' && c != 'q')
			putchar(c);
		c++;
	}
	putchar('\n');

	return (0);
}
