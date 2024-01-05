#include "main.h"

/**
 * _abs - function tht print the bsolute of integer
 *
 * Return: always 0 (success)
 *
 */

int _abs(int)
{
	int n;

	if (n > 0)
		_putchar(n);
	else if (n == 0)
		_putchar('0');
	else if (n < 0)
		_putchr(n * -1);
	return (0);
}
