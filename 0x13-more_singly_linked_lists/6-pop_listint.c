#include "lists.h"
/**
*pop_listint - deletes linked list
*@head: points to head
*Return: element data
**/
int pop_listint(listint_t **head)
{
	listint_t *node_temp;
	int first_num;

	if (!head || !*head)
		return (0);
	first_num = (*head)->n;
	node_temp = (*head)->next;
	free(*head);
	*head = node_temp;
	return (first_num);
}
