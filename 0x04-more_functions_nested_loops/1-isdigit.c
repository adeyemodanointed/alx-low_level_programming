#include "main.h"
/**
 * _isdigit - checks for numerical characters
 *
 * @c: param for the _isdigita function
 *
 * Return: 1 if digit and 0 if not
 */
int _isdigit(int c)
{

if (c >= 48 && c < 58)
	return (1);

else
	return (0);
}
