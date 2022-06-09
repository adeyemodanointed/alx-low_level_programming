#include "lists.h"
#include <stdlib.h>
/**
 * add_dnodeint - Adds a new node to the beginning of a doubly lined list
 * @head: head of the present list
 * @n: new data to be added
 * Return: returns the address of the new element
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	if (head == NULL)
		return (NULL);
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->prev = NULL;
	new->next = *head;
	*head = new;
	if (new->next != NULL)
		(new->next)->prev = new;
	return (new);
}
