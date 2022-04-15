#include <stdlib.h>
#include "function_pointers.h"

/**
 * array_iterator - runs all element as arguments of a function
 * @array: array of elements
 * @size: size of the array
 * @action: pointer to a function
 * Return: void
 */

void array_iterator(int *array, size_t size, void (action)(int))
{
	size_t i = 0;

	if (!action || !array)
		return;

	for ( ; i < size; i++)
		(*action)(array[i]);
}
