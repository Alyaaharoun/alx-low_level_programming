#include "main.h"

/**
 * _strlen - function thatprint the legnth
 *
 * @s: parameter of function
 *
 * Return: always 0 (success)
 */

int _strlen(char *s)
{
	int count;

	for (count = 0; *s != '\0'; s++)
		count++;
	return (count);
}
