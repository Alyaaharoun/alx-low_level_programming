#include <stdio.h>

/**
 * main - Entry point
 *
 * Describtion: A C program that print with if-else
 *
 * Return: Always 0 (success)
*/


int main(void)
{
	int n;
	printf("Please enter the number:");
	scanf("%d", &n);

	if (n > 0)
		printf("The number is positive\n");
	else
		if (n == 0)
			printf("The number is 0\n");
	else
		if (n < 0)
			printf("The number is negative\n");
	return (0);
}

