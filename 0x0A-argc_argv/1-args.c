#include <stdio.h>
/**
 *main - displays count of arguments
 *@argc: represents count
 *@argv: represents name of argument
 *Return: 0 on success
 **/
int main(int argc, char **argv)
{
(void)argv;
printf("%d\n", argc - 1);
return (0);
}
