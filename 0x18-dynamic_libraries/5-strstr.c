#include "main.h"
/**
*_strstr - start here
*@haystack: parameter
*@needle: parameter
*Return: needle or Null on error
**/
char *_strstr(char *haystack, char *needle)
{
for (; *haystack != '\0'; haystack++)
{
	char *a = haystack;
	char *b = needle;

	while (*a == *b && *b != '\0')
	{
		a++;
		b++;
	}
	if (*b == '\0')
		return (haystack);
}
return (0);
}
