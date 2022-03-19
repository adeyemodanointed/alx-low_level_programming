#include "main.h"
/**
 * _abs - print absolute value
 *
 * @n: single integer
 *
 * Return: absolute value
 */
void jack_bauer(void)
{
int hour, min;

for (hour = 0; hour < 24; hour++)
{
	_putchar(hour / 10 + '0');
	_putchar(hour % 10 + '0');
	_putchar(58);

	for (min = 0; min < 60; min++)
	{
		_putchar(min / 10 + '0');
		_putchar(min % 10 + '0');
	}
}

return;
}
