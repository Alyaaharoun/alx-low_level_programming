#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: A C programme that print aseparated numbers
 *
 * Return: Always 0 (success)
*/

int main(void)
{
	int n = 0;

	while (n < 10)
	{
		putchar(n + '0');
		if (n == 9)
			break;
		putchar(',');
		putchar(' ');
		n++;
	}
	putchar('\n');

	return (0);
}
