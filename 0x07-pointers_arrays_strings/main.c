#include "main.h"
#include <unistd.h>
#include <string.h>

int _putchar(char c);
unsigned int _strspn(char *s, char *accept);


int main(void)
{
char *s = "hello, world";
    char *f = "oleh";
    unsigned int n;

    n = _strspn(s, f);
    printf("%u\n", n);
    return (0);
}

int _putchar(char c)
{
		return (write(1, &c, 1));
}
unsigned int _strspn(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; s[i] != accept[j]; j++)
		{
			if (accept[j] == '\0')
			{
				return (i);
			}
		}
	}
	return (0);
}
