#include "main.h"
/**
*_strncpy - function copies string
*@dest: copy value
*@src: original value
*@n: bytes to copy
*Return: dest
**/
char *_strncpy(char *dest, char *src, int n)
{
int a;

while (a < n && src[a] != '\0')
{
	dest[a] = src[a];
	a++;
}
return (dest);
}
