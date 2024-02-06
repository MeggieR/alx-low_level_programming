#include <stdlib.h>
#include "lists.h"
/**
*free_listint - node to free linked list
*@head: first node
**/
void free_listint(listint_t *head)
{
	listint_t *node_temp;

	while (head != NULL)
	{
		node_temp = head;
		head = head->next;
		free(node_temp);
	}
}
