#include "main.h"

/**
 * jack_bauer - function that print the hours of the day
 *
 * Return: always 0 (success)
 */

void jack_bauer(void)
{
	int h;
	int m;

	for (h = 0; h < 24; h++)
	{
		for (m = 0; m < 60; m++)
		{
			_putchar(h);
			_putchar(':');
			_putchar(m);
			_putchar('\n');
		}
	}
}
