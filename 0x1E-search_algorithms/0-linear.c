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
	if (array == NULL)
		return (-1);

	for (int i = 0; i < size; i++)
	{
		if (array[i] == value)
			return(i)
	}
	return (-1);
}
