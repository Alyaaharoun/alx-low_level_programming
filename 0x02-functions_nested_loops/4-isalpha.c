#include "main.h"

/**
 * _isalpha - function that check if aletter lowercse or uppercase
 *
 * @c: input that check by the function
 *
 * Return: Returns 1 if c is a letter lowercase or uppercase otherwise return 0
 */

int _isalpha(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	if (c >= 97 && c <= 122)
		return (1);
return (0);
}
