#include "main.h"

/**
 * factorial - function to print factorial of number
 *
 * @n: parameter of function
 *
 * Return: always 0(success)
 */

int factorial(int n)
{
	if (n == 1)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	return (n * factorial(n - 1));
}
