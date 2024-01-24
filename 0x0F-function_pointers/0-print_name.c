#include "function_pointers.h"
/**
*print_name - this function prints a name
*@f: pointer to print_name
*@name: the person's name
**/
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
