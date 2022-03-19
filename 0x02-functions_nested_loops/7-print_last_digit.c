#include "main.h"
/**
 * print_last_digit - print last digit
 *
 * @n: single integer
 *
 * Return: Last digit
 */
int print_last_digit(int n)
{

if (n >= 0)
{
_putchar(n % 10 + '0');
return (n % 10);
}
else
{
_putchar((-1 * n) % 10 + '0');
return ((-1 * n) % 10);
}
}
