#include "lists.h"

/**
* add_node_end - add an element to the end of a linked list
* @head: pointer to the head
* @str: the string to be copied
* Return: the created element address
*/
list_t *add_node_end(list_t **head, const char *str)
{
list_t *ptr;
list_t *newNode = malloc(sizeof(list_t));

if (str == NULL)
return (NULL);
if (!newNode)
return (NULL);

newNode->str = strdup(str);
newNode->len = strlen(str);
newNode->next = NULL;

if (*head == NULL)
{
*head  = malloc(sizeof(list_t));
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
