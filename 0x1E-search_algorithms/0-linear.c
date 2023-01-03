#include <stdio.h>

/**
 * linear_search - function carries out a search linearly
 * @array: the array to be searched
 * @size: the size of the array
 * @value: the value to search out in the array
 * Return: returns the value's index
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return(i);
	}
	return (-1);
}
