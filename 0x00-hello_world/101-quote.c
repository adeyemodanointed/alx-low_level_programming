#include <stdio.h>

/**
 * main - Print to standard error
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	fwrite("and that piece of art is useful\" - Dora Korpar, 2015-10-19\n",
			59,
			2, stderr);
	return (1);
}
