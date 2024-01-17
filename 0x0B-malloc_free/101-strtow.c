#include "main.h"
#include <stdlib.h>

void fetch(char **letter, char *str);
void creates(char **letter, char *str, int start, int end, int index);

/**
*strtow - separates the words in a string
*@str: to be separated
*Return: pointer to the string array
**/
char **strtow(char *str)
{
	int a, flag, len;
	char **letter;

	if (str == NULL || str[0] == '\0' || (str[0] == ' ' && str[1] == '\0'))
		return (NULL);

	a = flag = len = 0;
	while (str[a])
	{
		if (flag == 0 && str[a] != ' ')
			flag = 1;
		if (a > 0 && str[a] == ' ' && str[a - 1] != ' ')
		{
			flag = 0;
			len++;
		}
		a++;
	}

	len += flag == 1 ? 1 : 0;
	if (len == 0)
		return (NULL);
	letter = (char **)malloc(sizeof(char *) * (len + 1));
	if (letter == NULL)
		return (NULL);

	fetch(letter, str);
	letter[len] = NULL;
	return (letter);
}
/**
*fetch - this function fectches words to an array
*@letter: the arrays string
*@str: the string
**/
void fetch(char **letter, char *str)
{
	int a, b, start, flag;

	a = b = flag = 0;
	while (str[a])
	{
		if (flag == 0 && str[a] != ' ')
		{
			start = a;
			flag = 1;
		}
		if (a > 0 && str[a] == ' ' && str[a - 1] != ' ')
		{
			creates(letter, str, start, a, b);
			b++;
			flag = 0;
		}
		a++;
	}
	if (flag == 1)
		creates(letter, str, start, a, b);
}

/**
*creates - formulates words that will be inserted to array
*@letter:string arrays
*@str: string
*@start: the words begining index
*@end: the word's end index
*@index: inset words here
*/
void creates(char **letter, char *str, int start, int end, int index)
{
	int a, b;

	a = end - start;
	letter[index] = (char *)malloc(sizeof(char) * (a + 1));

	for (b = 0; start < end; start++, b++)
		letter[index][b] = str[start];
	letter[index][b] = '\0';
}
