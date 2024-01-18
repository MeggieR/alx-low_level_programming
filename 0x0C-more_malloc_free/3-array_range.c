#include "main.h"
#include <stdlib.h>
/**
*array_range - Create array ranging from min-maz
*@min: first and smallest value in the array
*@max: last and largest value of the array
*Return: pointer to the new array. error if
*min>max
**/
int *array_range(int min, int max)
{
	int *a, i, s;

	if (min > max)
		return (NULL);
	s = max - min + 1;
	a = malloc(sizeof(int) * s);
	if (a == NULL)
		return (NULL);
	for (i = 0; i < s; i++)
		a[i] = min++;
	return (a);
}
