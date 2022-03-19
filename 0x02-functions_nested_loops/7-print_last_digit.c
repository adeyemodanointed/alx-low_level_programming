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
int val;
val = n % 10;

if (n >= 0)
{
val = (-1 * val);
}

_putchar(val + '0');
return (val);

}
