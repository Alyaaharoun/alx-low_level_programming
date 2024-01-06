#include "main.h"

/**
 * print_numbers - function that print numbers
 *
 * Return: always 0 (success)
 */

void print_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
		_putchar(i + 48);
	_putchar('\n');
}
