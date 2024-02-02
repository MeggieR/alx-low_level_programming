#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
*print_list - prints linked list elements
*@h: pointer to a list
*Return: list of nodes
**/
size_t print_list(const list_t *h)
{
	size_t x = 0;

	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%lu] %s\n", (unsigned long)h->len, h->str);
		h = h->next;
		x++;
	}
	return (x);
}
