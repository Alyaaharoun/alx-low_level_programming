#include "main.h"

/**
 * _abs - function tht print the bsolute of integer
 *
 * @n: parameter of function
 *
 * Return: always 0 (success)
 *
 */

int _abs(int n)
{
	int i;


	if (n > 0)
	{
		printf("%d\n", n);
	}
	else if (n == 0)
	{
		printf("0\n");
	}
	else if (n < 0)
	{
		printf("%d\n", n * -1);
	}
	return (0);
}
