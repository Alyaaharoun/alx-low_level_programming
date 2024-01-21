#include "main.h"

/**
 * _isdigit - function to check if character is digit
 *
 * @c: aparameter of function
 *
 * Return: always 0 (success)
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
