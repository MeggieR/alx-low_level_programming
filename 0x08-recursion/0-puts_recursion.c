#include "main.h"
/**
 * _puts_recursion - function for printing char
 * @s:represents char to be displayed
 * Return:0 on success.
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}

	else
		_putchar('\n');
}
