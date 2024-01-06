#include "main.h"

/**
 * print_to_98 - function that print numbers to 98
 *
 * @n: parmeter of function
 *
 * Return: always 0 (success)
 */

void print_to_98(int n)
{
	if (n <= 98)
	{
		for (n = n; n <= 98; n++)
		{
			printf("%d", n);
			printf(",");
			printf(" ");
		}
	}

	else
	{
		for (n = n; n >= 98; n--)
		{
			printf("%d", n);
			printf(",");
			printf(" ");
		}
	}
}
