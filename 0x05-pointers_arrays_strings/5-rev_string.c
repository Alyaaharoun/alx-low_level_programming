#include "main.h"

/**
*rev_string - function that reverse string
*
*@s: parameter of function
*
*Return: no return
*/

void rev_string(char *s)
{
	int l = 0;
	int i;
	char temp;

	if (s[l] != '\0')
	{
		l++;
	}
	for (i = 0; i < l; i++)
	{
		l--;
		temp = s[i];
		s[i] = s[l];
		s[l] = temp;
	}
}
