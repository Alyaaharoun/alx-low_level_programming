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
char *_strdup(char *str);

int main(int argc, char *argv[])
{
	char *s;

    s = _strdup("ALX SE");
    if (s == NULL)
    {
        printf("failed to allocate memory\n");
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

char *_strdup(char *str)
{
	char *s;
	int len = 0;
	int i;

if (str == NULL)
{
	return (NULL);
}
while (str[len] != '\0')
{
	len++;
}
	s = malloc( (len + 1) * sizeof(char));
	if (s == NULL)
	{
		return (NULL);
	}
	for (i = 0; str[i]; i++)
	{
		s[i] = str[i];
	}
	return (s);
}
