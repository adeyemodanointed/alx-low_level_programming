#include <stdlib.h>
#include "function_pointers.h"

/**
 * int_index - checks index of element
 * @array: array of elements
 * @size: size of the array
 * @cmp: pointer to a function
 * Return: void
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (!cmp || !array || size <= 0)
		return (-1);

	for ( ; i < size; i++)
		if ((*cmp)(array[i]) != 0)
			return (i);
	return (-1);
}
