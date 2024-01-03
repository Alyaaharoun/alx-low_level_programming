#include "main.h"

/**
 * Print_alphabet - Entry point use the _putchar function
 *
 * Describtion: print the alphabet in lowercase
 *
 * Return: No return
*/

void print_alphabet(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		_putchar(ch);

	_putchar('\n');
}
