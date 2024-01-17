#include "main.h"
#include <stdlib.h>
/**
*create_array - create array of size size and assign char c
*@size: array size
*@c: character that will be assigned
*Return: pointer to array, NULL if fail
**/
char *create_array(unsigned int size, char c)
{
size_t a;
char *array;

if (size == 0)
	return (NULL);
array = malloc(sizeof(char) * size);
if (array == NULL)
	return (NULL);
for (a = 0; a < size; a++)
	array[a] = c;

return (array);
}
