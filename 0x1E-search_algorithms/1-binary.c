#include <stdio.h>

/**
 * binary_search - Function to carry out a binary search
 * @array: the array to be searched
 * @size: the size of the array
 * @value: the target value
 * Return: returns the index of the number been searched
 */

int binary_search(int *array, size_t size, int value)
{
	size_t L = 0, R = size - 1, mid = L + R / 2;

	if (array == NULL)
		return (-1);
	while (L < R)
	{
		if (array[mid] < value)
			L = mid + 1;
		else if (array[mid] > value)
			R = mid - 1;
		else
			return (mid);
	}

	return (-1);
}
