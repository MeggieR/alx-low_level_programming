#include "main.h"
/**
 * _strlen_recursion - for reversing text
 * @s: text to be reverses
 * Return: length of string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + _strlen_recursion(s + 1));
}
