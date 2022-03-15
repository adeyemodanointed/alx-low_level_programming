#include "main.h"
/**
 * _islower - checks for lowercase characters
 *
 * @c: param for the _islower function
 *
 * Return: 1 if lower and 0 if not
 */
int _islower(int c)
{
if (c < 'a' || c > 'z')
	return (1);

else
	return (0);
}
