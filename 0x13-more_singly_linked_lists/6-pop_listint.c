#include "lists.h"

/**
 * pop_listint - removes the head of a list
 * @head: pointer to the head of the list
 * Return: 0 if empty, the value of head if not empty
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int n;

	if (*head == NULL)
		return (0);

	temp = *head;
	*head = temp->next;
	n = temp->n;
	free(temp);

	return (n);
}
