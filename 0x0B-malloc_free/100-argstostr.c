#include "main.h"
#include <stdlib.h>
/**
*argstostr - joins arguments
*@ac: the funcction counts these arguments
*@av: the vector of the arguments
*Return: new string. NUll upon error.
**/
char *argstostr(int ac, char **av)
{
	char *str, *s;
	int d, e, f, len = 0;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (d = 0; d < ac; d++)
	{
		s = av[d];
		e = 0;

		while (s[e++])
			len++;
		len++;
	}
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (str == NULL)
		return (NULL);
	for (d = 0, e = 0; d < ac && e < len; d++)
	{
		s = av[d];
		f = 0;

		while (s[f])
		{
			str[e] = s[f];
			f++;
			e++;
		}
		str[e++] = '\n';
	}
	str[e] = '\0';
	return (str);
}
