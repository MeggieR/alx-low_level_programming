#include "main.h"
#include <stdlib.h>
/**
*_calloc - function allocates array with memory
*@nmemb: amount of memory
*@size: int size
*Return: void pointer
**/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ttl_size;
	char *filler;
	unsigned int index;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ttl_size = malloc(size * nmemb);
	if (ttl_size == NULL)
		return (NULL);
	filler = ttl_size;
	for (index = 0; index < (size * nmemb); index++)
		filler[index] = '\0';
	return (ttl_size);
}
