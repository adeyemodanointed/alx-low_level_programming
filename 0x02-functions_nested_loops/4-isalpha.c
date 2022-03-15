#include "main.h"
/**
 * _isalpha - checks for alphabetic characters
 *
 * @c: param for the _isalpha function
 *
 * Return: 1 if lower and 0 if not
 */
int _isalpha(int c)
{

if ((c >= 65 || c <= 122) && c > 96 && c < 91)
	return (1);

else
	return (0);
}
