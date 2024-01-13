#include <stdio.h>
#include <stdlib.h>
/**
 * main - calculates the least coin for change
 * for the evailed cach
 * @argc: counts
 * @argv: arguments
 * Return: 0
 */
int main(int argc, char **argv)
{
int total, count;
unsigned int a;
char *p;

int coins[] = {25, 10, 5, 2};
if (argc != 2)
{
	printf("Error\n");
	return (1)
}
total = strtol(argv[1], &p, 10);
count = 0;
if (!*p)
{
	while (total > 1)
	{
		for (a = 0; a < sizeof(coins) / sizeof(coins[0]); a++)
		{
		if (total >= coins[a])
		{
			count += total / coins[a];
			total = total % coins[a];
		}
		}
	}
	if (total == 1)
		count++;
}
else
{
	printf("Error\n");
	return (1);
}
printf("%d\n", count);
return (0);
}
