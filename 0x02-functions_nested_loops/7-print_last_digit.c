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
return (n % 10);
}
else
{
return ((n * (-1)) % 10);
}
}
