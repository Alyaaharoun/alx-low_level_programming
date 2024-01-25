#include <stdio.h>
#include "main.h"
#include <stdlib>

/**
 * main - function to add numbers
 * @argc: first parameter
 * @argv: second parameter
 * Return: always 0(success)
*/

int main(int argc, char *argv[])
{
int i;
int add = 0;

if (argc == 1)
{
	printf("0\n");
}
if (argv[1] == '-')
{
	printf("Error\n");
	return (1);
}
for (i = 1; i != '\0'; i++)
{
	add = add + argv[i];
}
printf("%d\n", add);
return (0);
}
