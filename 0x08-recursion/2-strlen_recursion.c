#include "main.h"

/**
* _strlen_recursion - returns the length of a string using recursion
* @s: The string to print
* Return: length of string.
*/
int _strlen_recursion(char *s)
{
if (s[0] == '\0')
{
return (0);
}
return (1 + _strlen_recursion(s + 1));
}
