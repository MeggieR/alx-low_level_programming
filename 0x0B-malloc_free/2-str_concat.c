#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
*str_concat - joins 2 strings
*@s1: first string
*@s2: second string
*Return: pointer to memory. Null on failure
**/
char *str_concat(char *s1, char *s2)
{
int a, b, len1, len2, len;
char *result;
len1 = len2 = 0;
if (s1 != NULL)
{
	a = 0;
	while (s1[a++] != '\0')
		len1++;
}
if (s2 != NULL)
{
	a = 0;
	while (s2[a++] != '\0')
		len2++;
}
len = len1 + len2;
result = (char *)malloc(sizeof(char) * (len + 1));
if (result == NULL)
	return (NULL);
for (a = 0; a < len1; a++)
	result[a] = s1[a];
for (b = 0; b < len2; b++, a++)
	result[a] = s2[b];
result[len] = '\0';

return (result);
}
