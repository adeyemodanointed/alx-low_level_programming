#include <stdlib.h>
#include "lists.h"

/**
* add_node - add an element to the start of a linked list
* @head: pointer to the head
* @str: the string to be copied
* Return: the created element address
*/

list_t *add_node(list_t **head, const char *str)
{
list_t *newNode = malloc(sizeof(list_t));
if (!newNode)
return (NULL);

newNode->str = strdup(str);
newNode->len = strlen(str);
newNode->next = *head;
*head = newNode;

return (newNode);
}
