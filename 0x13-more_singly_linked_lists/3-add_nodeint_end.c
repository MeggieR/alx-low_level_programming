#include <stdlib.h>
#include "lists.h"
/**
*add_nodeint_end - adds new node at the end
*@head: points to head node
*@n: new node
*Return: new node, or NULL if it fails
**/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *n_new, *node_temp;

	n_new = malloc(sizeof(listint_t));
	if (n_new == NULL)
		return (NULL);
	n_new->n = n;
	n_new->next = NULL;
	if (*head == NULL)
	{
		*head = n_new;
		return (n_new);
	}
	node_temp = *head;
	while (node_temp->next != NULL)
	{
		node_temp = node_temp->next;
	}
	node_temp->next = n_new;
	return (n_new);
}
