#include "lists.h"
/**
*free_listint_safe - frees list
*@h: first node
*Return: freed list elements
**/
size_t free_listint_safe(listint_t **h)
{
	size_t count = 0;
	int var;
	listint_t *node_temp;

	if (!h || !*h)
		return (0);
	while (*h)
	{
		var = *h - (*h)->next;
		if (var > 0)
		{
			node_temp = (*h)->next;
			free(*h);
			*h = node_temp;
			count++;
		}
		else
		{
			free(*h);
			*h = NULL;
			count++;
			break;
		}
	}
	*h = NULL;
	return (count);
}
