#include "main.h"
#include <unistd.h>
#include <string.h>

int _putchar(char c);
char *_strpbrk(char *s, char *accept);


int main(void)
{
char *s = "hello, world";
    char *f = "world";
    char *t;

    t = _strpbrk(s, f);
    printf("%s\n", t);
    return (0);
}

int _putchar(char c)
{
		return (write(1, &c, 1));
}
char *_strpbrk(char *s, char *accept)
{
	while (*s != '\0')
	{
		const char *a = accept;
		while (*a != '\0')
		{
			if (*s == *a)
			{
				return (s);
			}
			a++;
		}
		s++;
	}
	return (NULL);
}
