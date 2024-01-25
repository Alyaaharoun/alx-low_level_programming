#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * main - function to multiply two numbers
 * @argc: first parameter
 * @argv: second parameter
 * Return: always 0(success)
*/

int main(int argc, char *argv[])
{
	int mul, a, b;

	if (argc > 3 || argc < 3)
{
	printf("Error\n");
	return (1);
}

	a = atoi(argv[1]);
	b = atoi(argv[2]);
	mul = a * b;


	printf("%d\n", mul);

return (0);
}
