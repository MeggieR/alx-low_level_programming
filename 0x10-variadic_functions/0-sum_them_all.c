#include "variadic_functions.h"
#include <stdarg.h>
/**
*sum_them_all - Calculates the sum of mumbers
*@n: Pass these parameters
*@...: calculate the sum of these parameters
*Return: If n == 0 - 0, or sum of parameters
*/
int sum_them_all(const unsigned int n, ...)
{
va_list y;
unsigned int x, sum = 0;

va_start(y, n);
for (x = 0; x < n; x++)
	sum += va_arg(y, int)
va_end(y);
return (sum);
}
