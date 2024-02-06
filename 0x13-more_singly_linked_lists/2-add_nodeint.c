#include <stdlib.h>
#include "lists.h"
/**
*add_nodeint - Adds function for adding node
*@head: head pointer
*@n: value of new node
*Return: new node address or NULL if it fails
**/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *n_new;

	n_new = malloc(sizeof(listint_t));
	if (n_new == NULL)
		return (NULL);
	n_new->n = n;
	n_new->next = *head;
	*head = n_new;
	return (n_new);
}
