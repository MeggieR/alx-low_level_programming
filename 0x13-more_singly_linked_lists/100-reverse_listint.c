#include "lists.h"
/**
*reverse_listint - reverses list
*@head: first node
*Return: first node of reversed list
**/
listint_t *reverse_listint(listint_t **head)
{
	listint_t *node_prev = NULL;
	listint_t *node_next = NULL;

	while (*head)
	{
		node_next = (*head)->next;
		(*head)->next = node_prev;
		node_prev = *head;
		*head = node_next;
	}
	*head = node_prev;
	return (*head);
}
