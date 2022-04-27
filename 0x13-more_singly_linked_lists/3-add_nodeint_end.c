#include "lists.h"

/**
* add_nodeint_end - add an element to the end of a linked list
* @head: pointer to the head
* @n: the integer to be copied
* Return: the created element address
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *ptr;
listint_t *newNode = malloc(sizeof(listint_t));

if (!newNode)
return (NULL);

newNode->n = n;
newNode->next = NULL;

if (*head == NULL)
{
*head  = malloc(sizeof(listint_t));
if (!(*head))
return (NULL);
*head = newNode;
}
else
{
ptr = *head;
while (ptr->next != NULL)
{
ptr = ptr->next;
}
ptr->next = newNode;
}

return (newNode);
}
