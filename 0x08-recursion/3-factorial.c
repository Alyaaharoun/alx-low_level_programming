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
	int fact;

	if (n > 0)
	{
		fact = n * factorial(n - 1);
	}
	return (fact);
