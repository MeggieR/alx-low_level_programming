#include "lists.h"
/**
*get_nodeint_at_index - return nodes
*@head: linked list's first node
*@index: node index to be returned
*Return: node or null
**/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;
	listint_t *node_temp = head;

	while (node_temp && count < index)
	{
		node_temp = node_temp->next;
		count++;
	}
	return (node_temp ? node_temp : NULL);
}
