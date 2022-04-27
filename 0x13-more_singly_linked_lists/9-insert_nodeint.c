#include "lists.h"

/**
 * insert_nodeint_at_index - inserts node at index
 * @head: double pointer to the head
 * @idx: index of insert point
 * @n: value to be inserted at new node
 * Return: the inserted node or NULL if fails
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *ptr;
	unsigned int i = 0;
	listint_t *temp = malloc(sizeof(listint_t));

	if (temp == NULL)
		return (NULL);
	if (head == NULL)
		return (NULL);
	if (idx != 0)
	{
	ptr = *head;

	while (i < (idx - 1) && ptr != NULL)
	{
		ptr = ptr->next;
		i++;
	}
	if (ptr == NULL)
		return (NULL);
	}

	temp->n = n;
	if (idx == 0)
	{
		temp->next = *head;
		*head = temp;
		return (temp);
	}
			
	temp->next = ptr->next;
	ptr->next = temp;

	return (temp);
}
