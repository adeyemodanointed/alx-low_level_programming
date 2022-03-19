#include "main.h"
/**
 * times_table - print 9 times table
 *
 * Return: void
 */
void times_table(void)
{
int i = 0;

while (i < 10)
{
	int j = 0;

	while (j < 10)
	{
	int y = i * j;

	if (y >= 10)
	{
	_putchar((y / 10) + '0');
	_putchar((y % 10) + '0');
	}
	else
	{
	_putchar(y + '0');
	}
	if (j != 9)
	{
	_putchar(',');
	if (i * (j + 1) < 10)
		_putchar(' ');
	_putchar(' ');
	}
	else
	{
	_putchar('\n');
	}
	j++;
	}
i++;
}
return;
}
