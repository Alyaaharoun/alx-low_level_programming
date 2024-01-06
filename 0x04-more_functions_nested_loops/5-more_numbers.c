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
	int c;


	for (n = 1; n <= 10; n++)
	{
		for (i = 0; i < 15; i++)
		{
			i = c;
			if (c > 9)
			{
				_putchar(1 + 48);
				c = n % 10;
			}
			_putchar(c + 48);
		}
		_putchar('\n');
	}
}
