#include "main.h"
/**
 * print_times_table - print times table
 *
 * @n: integer input
 *
 * Return: void
 */
void print_times_table(int n)
{
int i;

if (n < 0 || n > 15)
{
	_putchar('\n');
	i = 16;
}

while (i < n)
{
	int j = 0;

	while (j < n)
	{
	int y = i * j;
	int f, s;
	
	f = y / 100;
	s = y % 100;

	if (y >= 100)
	{
	_putchar(f + '0');
	_putchar(s / 10 + '0');
	_putchar((s % 10) + '0');
	}
	else if (y < 100 && y > 9)
	{
	_putchar(s / 10 + '0');
	_putchar(s % 10 + '0');
	}
	else
	{
	_putchar(y + '0');
	}

	if (j != n - 1)
	{
	_putchar(',');
	if (i * (j + 1) < 100)
		_putchar(' ');
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
