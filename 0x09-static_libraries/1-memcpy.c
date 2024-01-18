#include "main.h"
/**
 *_memcpy - function for copying
 *@dest: where to copy
 *@src: what to copy
 *@n: amount of bytes
 *Return: copied value
 **/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i = 0;
	int j = 0;

	for (; i < j; i++)
	{
		dest[i] = src[i];
		n--;
	}
	return (dest);
}
