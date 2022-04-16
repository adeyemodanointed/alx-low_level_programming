#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * op_add - adds up to integers
 * @a: first integer
 * @b: second integer
 * Return: sum of two integers
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtracts up to integers
 * @a: first integer
 * @b: second integer
 * Return: subtraction of two integers
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplies up to integers
 * @a: first integer
 * @b: second integer
 * Return: multiplication of two integers
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divides up to integers
 * @a: first integer
 * @b: second integer
 * Return: division of two integers
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - finds modulus of two integers
 * @a: first integer
 * @b: second integer
 * Return: modulus of two integers
 */
int op_mod(int a, int b)
{
	return (a % b);
}
