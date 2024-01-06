#include "main.h"

/**
 * _isupper - function to check the upper case character
 *
 * @c: aparameter of function
 *
 * Return: always 0 (success)
 */

int _isupper(int c)
{
	if (c > 65 && c < 90)
		return (1);
	else
		return (0);
}
