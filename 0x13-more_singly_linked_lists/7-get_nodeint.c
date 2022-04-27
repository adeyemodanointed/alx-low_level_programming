#include "lists.h"

/**
 * get_nodeint_at_index - Gets the data at an index in a list
 * @head: pointer to the head of the list
 * @index: the index to be gotten
 * Return: the gotten node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);

	while (i < index)
	{
		head = head->next;
		i++;
	}

	return (head);
}
