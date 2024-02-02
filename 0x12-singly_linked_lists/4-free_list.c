#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
*free_list - function for freeing list
*@head: first node pointer
**/
void free_list(list_t *head)
{
	list_t *temporary;

	if (head == NULL)
		return;
	while (head->next != NULL)
	{
		temporary = head->next;
		free(head->str);
		free(head);
		head = temporary;
	}
	free(head->str);
	free(head);
}
