#include "main.h"

/**
 * more_numbers - function print numbers ten times
 *
 * Return: always 0 (success)
 */

void more_numbers(void)
{
	int i;
	int n;

	for (n = 1; n <= 10; n++)
	{
		for (i = 0; i < 15; i++)
		{
			_putchar(i + 48);
			_putchar('\n');
		}
	}
	_putchar('\n');
}
