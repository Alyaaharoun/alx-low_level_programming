#include "main.h"

/**
 * print_diagonal - function that print diagonal
 *
 * @n: parameter of function
 *
 * Return: no return
 */

void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i;

		for (i = 0; i < n; i++)
		{
			_putchar('\\');
			_putchar('\n');
		}
	}
}
