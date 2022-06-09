#include "lists.h"

/**
 * dlistint_len - returns number of element in a doubly linked list
 * @h: head of the list
 *
 * Return: the size of the list
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t count;

	for (count = 0; h != NULL; count++)
	{
		h = h->next;
	}

	return (count);
}
