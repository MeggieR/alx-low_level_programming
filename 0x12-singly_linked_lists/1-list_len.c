#include <stdlib.h>
#include "lists.h"
#include <stdio.h>
/**
*list_len -calculates no of elements
*@h: Points list
*Return: elements in list
**/
size_t list_len(const list_t *h)
{
	size_t x = 0;

	while (h)
	{
		x++;
		h = h->next;
	}
	return (x);
}
