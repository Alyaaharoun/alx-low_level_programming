#include "main.h"

/**
 * is_prime_number - function to put prime number
 *
 * @n: first parameter
 * @o: parameter of function
 * Return: int
 */

int check(int n, int o);
int is_prime_number(int n)
{
	return (check(n, 2));
}

/**
 * check - function to check prime
 *
 * @n: parameter
 *
 * @o: second parameter
 * Return: int
 */

int check(int n, int o)
{
	if (o >= n && n > 1)
		return (1);
	else if (n % o == 0 || n <= 1)
		return (0);
	else
		return (check(n, o + 1));
}
