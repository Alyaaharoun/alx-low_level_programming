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

	if (n < 0)
		n = (-1) * n;
	return (n);
}
