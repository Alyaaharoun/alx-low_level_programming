#include "main.h"
#include <stdio.h>
#include <stdlib.h>

int atoi(char *s);
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
int atoi(char *s)
{
	int res = 0;
	int sign = 1;
	int i = 0;

	if (s[0] = '-')
	{
		sign = -1;
		i++;
	}
	for (; i != '\0'; i++)
	{
		res = res * 10 + s[i] - '\0';
	}
	return (res * sign);
}
