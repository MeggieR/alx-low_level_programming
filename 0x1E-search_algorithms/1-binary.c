#include <stdio.h>
#include <stddef.h>
#include "search_algos.h"
/**
*print_array - function to print current subarray
*@array: Array to be printed
*@low: First index of the subarray
*@high: Last index of the subarray
*/
void print_array(int *array, size_t low, size_t high)
{
size_t i;

printf("Searching in array: ");
for (i = low; i <= high; i++)
{
	printf("%d", array[i]);
	if (i < high)
		printf(", ");
}
printf("\n");
}

/**
*binary_search - Search value in array using binary algorithm
*@array: pointer to the array of numbers
*@size: number of elements in an array
*@value: number to be searched
*
*Return: index of the value, -1 if not found
**/
int binary_search(int *array, size_t size, int value)
{
size_t low, high, mid;

if (array == NULL)
	return (-1);

low = 0;
high = size - 1;

while (low <= high)
{
	print_array(array, low, high);
	mid = low + (high - low) / 2;

	if (array[mid] == value)
		return (mid);
	else if (array[mid] < value)
		low = mid + 1;
	else
		high = mid - 1;
}
return (-1);
}
