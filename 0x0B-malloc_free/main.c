#include <stdio.h>
#include "main.h"
#include <stdlib.h>
#include <unistd.h>

/**
 * main - function to multiply two numbers
 * @argc: first parameter
 * @argv: second parameter
 * Return: always 0(success)
*/

int _putchar(char c);
char *str_concat(char *s1, char *s2);

int main(int argc, char *argv[])
{
char *s;

    s = str_concat("Betty ", "Holberton");
    if (s == NULL)
    {
        printf("failed\n");
        return (1);
    }
    printf("%s\n", s);
    free(s);
    return (0);
}

int _putchar(char c)
{
	return (write(1, &c, 1));
}

char *str_concat(char *s1, char *s2)
{
	int i;
	int j;
	char *s;
	int l1;
	int l2;
	int l;

l1 = l2 = 0;
if (s1 != NULL)
	{
		i = 0;
		while (s1[i++] != '\0')
		{
			l1++;
		}
	}
	if (s2 != NULL)
	{
		i = 0;
		while (s2[i++] != '\0')
		{
			l2++;
		}
	}
	l = l1 + l2;
	s = (char*) malloc(sizeof(char) * (l + 1));
	if (s == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < l1; i++)
	{
		s[i] = s1[i];
	}
	for (j = 0; j < l2; j++, i++)
	{
		s[i] = s2[j];
	}
	s[l] = '\0';
	return (s);

}