#include "main.h"

/**
 * _sqrt_recursion - function that print the square of number
 *
 * @n: parameter of function
 *
 * Return: always 0(success)
 */

int square(int n, int val);
int _sqrt_recursion(int n)
{
	return (square(n, 1));
}

/**
 * square - finction multi numbers
 * @n: first parameter
 * @val: second parameter
 * Return: int
 */

int square(int n, int val)
{
	if (val * val == n)
		return (val);
	else if (val * val < n)
		return (square(n, (val + 1)));
	else
		return (-1);
}
