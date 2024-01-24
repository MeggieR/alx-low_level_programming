#include "function_pointers.h"
#include <stdio.h>
/**
*array_iterator - function for printing on new line
*@array: original array
*@size: print this number of elements
*@action: print pointer
*Return: void
**/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int x;

	if (array == NULL || action == NULL)
		return;
	for (x = 0; x < size; x++)
	{
		action(array[x]);
	}
}
