#include "main.h"
/**
*_atoi - change given string to int
*@s: convert this string
*Return: integer.
*/
int _atoi(char *s)
{
int sign = 1, a = 0;
unsigned int res = 0;

while (!(s[a] <= '9' && s[a] >= '0') && s[a] != '\0')
{
	if (s[a] == '-')
		sign *= -1;
	a++;
}
while (s[a] <= '9' && (s[a] >= '0' && s[a] != '\0'))
{
	res = (res * 10) + (s[a] - '0');
	a++;
}
res *= sign;
return (res);
}
