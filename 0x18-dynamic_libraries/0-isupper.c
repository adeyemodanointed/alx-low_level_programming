#include "main.h"
/**
 * _isupper - checks for uppercase characters
 *
 * @c: param for the _isupper function
 *
 * Return: 1 if lower and 0 if not
 */
int _isupper(int c)
{
if (c < 'A' || c > 'Z')
	return (0);

else
	return (1);
}
