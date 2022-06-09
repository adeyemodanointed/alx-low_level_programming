#include "lists.h"

/**
 * print_dlistint - prints the list of all values in a doubly linked list
 * @h: head of the list
 *
 * Return: the size of the list
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t count;

	for (count = 0; h != NULL; count++)
	{
		printf("%d\n",h->n);
		h = h->next;
	}

	return (count);
}
