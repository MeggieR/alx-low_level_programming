#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h>

/**
 * linear_search - searches for a value with search algorith,
 * @array: Pointer to the first element of searched array
 * @size: Number of elements in the array
 * @value: Searching for this value
 * Return: The first index where value is found, -1 if absent
 */
int linear_search(int *array, size_t size, int value)
{
size_t i;

if (array == NULL)
return (-1);

for (i = 0; i < size; i++)
{
	printf("Value checked array[%zu] = [%d]\n", i, array[i]);
	if (array[i] == value)
	return (i);
}

return (-1);
}
