include "main.h"

/**
 * _islower - function to check the lowercase alphabet
 *
 * @c: check the input of function
 *
 * Return: return 1 if c is lowercase otherwise alwys(0)
 *
 */

int _islower(int c)
{

	if (c >= 97 && c <= 122)
		return (1);
return (0);
}
