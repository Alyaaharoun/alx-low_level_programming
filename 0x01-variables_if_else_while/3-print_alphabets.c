#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: A C program that print lower and upper case
 *
 * Return: Always 0 (success)
*/

int main(void)
{

	char ch = 'a';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	ch = 'A';
	while (ch <= 'Z')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');

	return (0);
}
