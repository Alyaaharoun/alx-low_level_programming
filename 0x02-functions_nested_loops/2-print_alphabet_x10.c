#include "main.h"

/**
 * print_alphabet_x10 - function that print alphabet in 10 times
 *
 * Return: No return
 */

void print_alphabet_x10(void)
{
	int ch;
	int n;

	for (n = 1; n <= 10; n++)
{
	for (ch = 'a'; ch <= 'z'; ch++)
		_putchar(ch);
	_putchar('\n');
}
}
