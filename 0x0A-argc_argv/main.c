#include "main.h"
#include <stdio.h>
#include <stdlib.h>

int atoi(const char *s);
int main(int argc, char *argv[])
{
	int mul, a, b;
	mul = a * b;
	a = atoi(argv[1]);
	b = atoi(argv[2]);

if (argc == 3)
{
	printf("%d\n", mul);
}
else if (argc != 3)
{
	printf("Error\n");
	return (1);
}
return (0);
}
