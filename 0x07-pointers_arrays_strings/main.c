#include "main.h"
#include <unistd.h>
#include <string.h>

int _putchar(char c);
char *_strchr(char *s, char c);



int main(void)
{
char *s = "hello";
    char *f;

    f = _strchr(s, 'l');

    if (f != NULL)
    {
        printf("%s\n", f);
    }
    return (0);
}

int _putchar(char c)
{
		return (write(1, &c, 1));
}
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (*s == c)
	{
		return (s);
	}
	return (NULL);
}
