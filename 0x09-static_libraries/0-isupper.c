#include "main.h"
/**
 *_isupper - fucntion checks uppercase letters
 *@c: char that wil be checked
 *
 * Return: 0 if false or 1 if true.
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
