#include "main.h"
/**
 * times_table - print 9 times table
 *
 * Return: void
 */
void times_table(void)
{
int i = 0, j = 0;

while (i < 10)
{
	while (j < 10)
	{
	int y = i * j;
	_putchar(y);
	if (j != 9)
	{
	_putchar(',');
	_putchar(' ');
	}
	}
return;
}
}
