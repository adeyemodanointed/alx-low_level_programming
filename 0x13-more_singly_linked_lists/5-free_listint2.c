#include "lists.h"

/**
* free_listint2 - free all part of a linked list
* @head: pointer to the head
* Return: void
*/
void free_listint2(listint_t **head)
{
listint_t *temp;
temp = *head;
while (temp != NULL)
{
*head = temp->next;
free(temp);
temp = *head;
}
free(temp);

*head = NULL;
}
