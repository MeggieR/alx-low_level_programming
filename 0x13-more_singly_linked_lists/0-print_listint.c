#include "lists.h"
/**
*print_listint - print singly linked list's data
*@h: pointer of head in the list
*Return: number of nodes
**/
size_t print_listint(const listint_t *h)
{
	size_t num_nodes = 0;

	if (h == NULL)
		return (0);
	for (num_nodes = 0; h != NULL; num_nodes++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (num_nodes);
}
