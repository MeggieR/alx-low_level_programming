#include "main.h"
/**
*_strchr - locates c in strng
*@s: pointer to a string
*@c: input
*Return: character c if found. NULL if not.
**/
char *_strchr(char *s, char c)
{
	int a = 0;

	for (; s[a] != '\0'; a++)
	{
		if (s[a] == c)
			return (&s[a]);
	}
	return (0);
}
