#include "function_pointers.h"
/**
*int_index - compares two indexes
*@array: first comparison
*@size: compare this amounts of elements
*@cmp: pointer to int_index
*Return: Always 0
**/
int int_index(int *array, int size, int (*cmp)(int))
{
	int x;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);
	for (x = 0; x < size; x++)
	{
		if (cmp(array[x]))
			return (x);
	}
	return (-1);
}
