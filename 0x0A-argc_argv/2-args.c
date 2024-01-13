#include <stdio.h>
/**
* main - displays arguments it receives.
* @argc: argument count
* @argv: name of arguments
*
* Return: 0
*/
int main(int argc, char **argv)
{
int a;

for (a = 0; a < argc; a++)
printf("%s\n", argv[a]);

return (0);
}
