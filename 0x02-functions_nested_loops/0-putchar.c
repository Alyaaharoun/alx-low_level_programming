#include "main.h"

/**
 * main - Entry point
 *
 * Describtion: function print string of character
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char str[] = "_putchar";
	int i;

	for (i = 0; i < 8; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');

	return (0);
}
