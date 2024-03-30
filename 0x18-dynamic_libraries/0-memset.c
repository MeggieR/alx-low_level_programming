#include "main.h"
/**
 * _memset - function to replace s with b by n amount
 * @s: starting memory
 * @b: replacing value
 * @n: no of bytes to cove
 * Return: s, the replaced value.
 **/
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = n;
		n--;
	}
	return (s);
}
