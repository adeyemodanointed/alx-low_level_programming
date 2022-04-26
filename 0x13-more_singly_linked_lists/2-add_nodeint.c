#include <stdlib.h>
#include "lists.h"

/**
* add_nodeint - add an element to the start of a linked list
* @head: pointer to the head
* @n: the integer to be copied
* Return: the created element address
*/

listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *newNode = malloc(sizeof(listint_t));
if (!newNode)
return (NULL);

newNode->n = n;
newNode->next = *head;
*head = newNode;

return (newNode);
}
