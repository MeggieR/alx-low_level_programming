#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
*add_node - adds node
*@head: points to list
*@str: string being addes
* Return: new address or NULL
**/
list_t *add_node(list_t **head, const char *str)
{
	list_t *n;
	unsigned int len = 0;

	while (str[len])
		len++;
	n = malloc(sizeof(list_t));
	if (!n)
		return (NULL);
	n->str = strdup(str);
	if (!n->str)
	{
		free(n);
		return (NULL);
	}
	n->len = len;
	n->next = *head;
	*head = n;
	return (*head);
}
