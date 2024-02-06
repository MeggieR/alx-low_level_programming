#include "lists.h"
/**
*listint_len - calclates elements in a list
*@h: head pointer
*Return: count of elements in a list
**/
size_t listint_len(const listint_t *h)
{
	size_t num_count;

	if (h == NULL)
		return (0);
	for (num_count = 0; h != NULL; num_count++)
	{
		h = h->next;
	}
	return (num_count);
}
