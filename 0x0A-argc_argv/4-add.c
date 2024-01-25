#include <stdio.h>
#include "main.h"
#include <stdlib.h>

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
int n;

if (argc == 1)
{
	printf("0\n");
}
if ()
{
	printf("Error\n");
	return (1);
}
n = atoi(argv[i]);
for (i = 1; i != '\0'; i++)
{
	add = add + n;
}
printf("%d\n", add);
return (0);
}
