#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
*add_node_end - function for adding node in a list
*@head: points to head
*@str: copy this and add a new one
*Return: new address or NULL if failed
**/
list_t *add_node_end(list_t **head, const char *str)
{
list_t *new, *temp;

if (str == NULL)
	return NULL;
new = malloc(sizeof(list_t));
if (new == NULL)
	return NULL;
new->str = strdup(str);
if (new->str == NULL)
{
	free(new);
	return NULL;
}
new->len = strlen(str);
new->next = NULL;
if (*head == NULL)
{
	*head = new;
}
else
{
	temp = *head;
	while (temp->next != NULL)
		temp = temp->next;
	temp->next = new;
}
return (new);
}
