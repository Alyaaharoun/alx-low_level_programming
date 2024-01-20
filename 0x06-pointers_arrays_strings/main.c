#include "main.h"
#include <unistd.h>
#include <string.h>

int _putchar(char c);
int _strcmp(char *s1, char *s2);
int main(void)
{
	
	char s1[] = "Hello";
    char s2[] = "World!";

    printf("%d\n", _strcmp(s1, s2));
    printf("%d\n", _strcmp(s2, s1));
    printf("%d\n", _strcmp(s1, s1));
    return (0);
}

int _putchar(char c)
{
		return (write(1, &c, 1));
}

int _strcmp(char *s1, char *s2)
{
	int i;

    for (i = 0; s1[i] != '\0' || s2[i] != '\0'; i++)
    {
        if (s1[i] != s2[i])
        {
            if (s1[i] < s2[i])
                return (s1[i] - s2[i]);
            else if (s1[i] > s2[i])
                return (s1[i] - s2[i]);
        }
    }
    return (0);
}
