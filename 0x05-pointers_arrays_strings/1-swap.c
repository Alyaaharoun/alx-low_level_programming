#include "main.h"

/**
 * swap_int - function that swap two number
 *
 * @a: first parameter as first number
 *
 * @b: second parameter as second number
 *
 * Return: no return
 */
void swap_int(int *a, int *b)
{
	*a = &b;
	*b = &a;
}
