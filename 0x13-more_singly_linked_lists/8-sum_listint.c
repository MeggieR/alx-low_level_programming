#include "lists.h"
/**
*sum_listint - calculates sum
*@head: first node
*Return: sum
**/
int sum_listint(listint_t *head)
{
	int total = 0;
	listint_t *node_temp = head;

	while (node_temp)
	{
		total += node_temp->n;
		node_temp = node_temp->next;
	}
	return (total);
}
