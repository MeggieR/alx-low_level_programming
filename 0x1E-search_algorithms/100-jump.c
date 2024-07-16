#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "search_algos.h"
/**
*jump_search - Function for finding value using jump algorith
*@array : points to the array of numbers
*@value : look for this value
*@size : number of elements in the array
*
*Return : value or -1 upon failure
**/
int jump_search(int *array, size_t size, int value)
{
size_t i, step, prev;

if (array == NULL || size == 0)
	return (-1);

step = (size_t)sqrt(size);
prev = 0;

for (i = 0; i < size; i += step)
{
	printf("Value checked array [%lu] = [%d]\n",(unsigned long)i, array[i]);
	if (array[i] >= value || i + step >= size)
	{
		prev = i;
		break;
	}
}
for (i = prev; i < size && i < prev + step; i++)
{
	printf("Value checked array [%lu] = [%d]\n", (unsigned long)i, array[i]);
	if (array[i] == value)
		return ((int)i);
}
return (-1);
}
