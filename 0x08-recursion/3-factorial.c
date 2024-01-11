#include "main.h"

/**
 * factorial - function that finds factorial
 * @n: we are finding factorial for this no
 *
 * Return: prints the factorial
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
