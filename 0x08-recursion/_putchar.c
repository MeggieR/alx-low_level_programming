#include "main.h"
#include <unistd.h>
/**
 * _putchar - function for dsplaying char
 * @c: Represents character to display
 *
 * Return 1 on success and -1 on error.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
