#include "main.h"
#include <stdlib.h>
/**
*_realloc - function for reallocating memory
*@ptr: refers to the old memory
*@old_size: old size that malloc provided in the heap
*@new_size: new size that malloc provides in the heap
*Return: the newly allocated memory pointer
**/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
char *x;
size_t a, max = new_size;
char *oldx = ptr;

if (ptr == NULL)
{
	x = malloc(new_size);
	return (x);
}
else if (new_size == 0)
{
	free(ptr);
	return (NULL);
}
else if (new_size == old_size)
	return (ptr);
x = malloc(new_size);
if (x == NULL)
	return (NULL);
if (new_size > old_size)
	max = old_size;
for (a = 0; a < max; a++)
{
	x[a] = oldx[a];
}
free(ptr);
return (x);
}
