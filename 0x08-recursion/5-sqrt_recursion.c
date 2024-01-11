#include "main.h"

/**
 * _sqrt_recursion - function that print the square of number
 *
 * @n: parameter of function
 *
 * @v: parameter
 *
 * Return: always 0(success)
 */

int square(int n, int v);
int _sqrt_recursion(int n)
{
	return (square(n, 1));
}

/**
 * square - finction multi numbers
 *
 * @n: first parameter
 *
 * @v: second parameter
 *
 * Return: int
 */

int square(int n, int v)
{
	if (v * v == n)
		return (v);
	else if (v * v < n)
		return (square(n, (v + 1)));
	else
		return (-1);
}
