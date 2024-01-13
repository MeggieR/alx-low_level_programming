#include <stdio.h>
/**
 *main - funtion of program that prints its name
 *@argc: no of arguments
 *@argv: array containing name of argument
 *Return: 0 on success
 **/
int main(int argc, char **argv)
{
(void)argc;
printf("%s\n", argv[0]);
return (0);
}
