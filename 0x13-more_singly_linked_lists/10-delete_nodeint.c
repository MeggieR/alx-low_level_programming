#include "lists.h"
/**
*delete_nodeint_at_index - deletes node
*@head: first node
*@index: delete this node
*Return: 1 on success 0 on fail
**/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *node_temp = *head;
	listint_t *node_current = NULL;
	unsigned int count = 0;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		free(node_temp);
		return (1);
	}
	while (count < index - 1)
	{
		if (!node_temp || !(node_temp->next))
			return (-1);
		node_temp = node_temp->next;
		count++;
	}
	node_current = node_temp->next;
	node_temp->next = node_current->next;
	free(node_current);
	return (1);
}
