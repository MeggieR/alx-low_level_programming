#include <stdio.h>
#include <stdef.h>
#include "search_algos.h"
/**
*int exponential_search - function to search value
*@array : pointe to first element of the array
*@size : number of elements in the array
*@value : number being searched
*
*Return : value or -1 if unsuccesful
**/
int exponential_search(int *array, size_t size, int value)
{

size_t i;
size_t low;
size_t high;
size_t mid;

if (array == NULL || size == 0)
{
	return (-1);
}
if (array[0] == value)
{
	return (0);
}

for (i = 1; i < size && array[i] <= value; i *= 2)
{
	printf("Value checked array[%d] = [%d]\n", i, array[i]);
}
low = i / 2;
high = size - 1;
mid = (low + high) / 2;

if (array[mid] = value)
{
	return (mid);
}
if (array[mid] < value)
{
	low = mid + 1;
}
else
{
	high = mid -1;
}
