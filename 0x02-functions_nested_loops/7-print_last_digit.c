#include "main.h"

/**
 * print_last_digit - function that print last digit
 *
 * @n: parameter of function
 *
 * Return: always 0 (success)
 */

int print_last_digit(int n)
{
	int l;

	if (n > 0)
		l = n % 10;

	else
		l = -1 * (n % 10);

	_putchar(l + '0');

	return (l);
}
