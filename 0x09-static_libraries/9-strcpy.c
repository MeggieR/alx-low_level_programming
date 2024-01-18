#include "main.h"
/**
*_strcpy - copies atring from dest to src
*@dest: destination
*@src: origin
*Return: final copied string
**/
char *_strcpy(char *dest, char *src)
{
int j = 0;
int k = 0;

while (*(src + j) != '\0')
{
	j++;
}
for (; k < j; k++)
{
	dest[k] = src[k];
}
dest[j] = '\0';
return (dest);
}
