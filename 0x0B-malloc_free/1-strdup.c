#include "main.h"
#include <stdlib.h>

/**
*_strdup - function to pointer of new stringcopy
*@str: the original string
*Return: pointer of copied string,NULL on error
**/
char *_strdup(char *str)
{
char *cpy;
int a, len = 0;

if (str == NULL)
	return (NULL);
while (str[len] != '\0')
	len++;
cpy = (char *)malloc((sizeof(char) * len) + 1);
if (cpy == NULL)
	return (NULL);
for (a = 0; a < len; a++)
	cpy[a] = str[a];
cpy[len] = '\0';
return (cpy);
}
