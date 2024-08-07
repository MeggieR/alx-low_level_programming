#include <stdio.h>
#include <stddef.h>
#include "search_algos.h"
/**
*interpolation_search - Function to seach value using interpolatiin search
*@array : pointer to the arry with th elist
*@size : number of items in teh array
*@value : number being searched
*
*Return: number searched or -1 if unsuccesful
**/

int interpolation_search(int *array, size_t size, int value)
{
size_t low;
size_t high;
size_t pos;

if (array == NULL || size == 0)
{
	return (-1);
}
low = 0;
high = size - 1;

while (low <= high && value >= array[low] && value <= array[high])
{
	if (low == high)
	{
		if (array[low] == value)
		{
			printf("Value checked array [%lu] = [%d]\n", low, array[low]);
			return (low);
		}
		break;
	}
	pos = low + (((double)(high - low) / (array[high] - array[low])) * 
			(value - array[low]));
	printf("Value checked array[%lu] = [%d]\n", pos, array[pos]);
	if (array[pos] == value)
	{
		return (pos);
	}
	if (array[pos] < value)
	{
		low = pos + 1;
	}
	else
	{
		high = pos - 1;
	}
}

return (-1);
}
