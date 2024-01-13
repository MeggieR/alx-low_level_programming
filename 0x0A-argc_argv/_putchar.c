#include <stdio.h>
#include "main.h"
/**
 *_putchar - displays character to std output
 *@c: char to be displayed
 *@Return: 1 on success and 0 on error
 **/
int _putchar(char c)
{
	return (write(1, &c, 1));
}
