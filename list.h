#ifndef _LIST_H
#define _LIST_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
size_t print_list(const list_t *h);

typedef struct Node
{
	char *str;
	size_t len;
	struct Node *next;
} list_t;

#endif
