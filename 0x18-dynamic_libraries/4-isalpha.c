#include "main.h"
/**
*_isalpha - confirms there is an uppercase letter
*@c: check here
*Return: 1 if true, 9 on error
**/
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
