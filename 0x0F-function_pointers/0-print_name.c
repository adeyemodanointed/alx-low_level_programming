#include <stdlib.h>
#include "function_pointers.h"

/**
 * print_name - prints the name
 * @name: name to print
 * @f: pointer tk a function
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	if (!f)
		return;
	(*f)(name);
}
