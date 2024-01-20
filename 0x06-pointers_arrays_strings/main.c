#include "main.h"
#include <unistd.h>
#include <string.h>

int _putchar(char c);
char *string_toupper(char *s);

int main(void)
{
    char str[] = "Look up!\n";
    char *ptr;

    ptr = string_toupper(str);
    printf("%s", ptr);
    printf("%s", str);
    return (0);
}

int _putchar(char c)
{
		return (write(1, &c, 1));
}

char *string_toupper(char *s)
{
    int i;

    for (i = 0; s[i] != '\0'; i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z')
        {
            s[i] = s[i] - 32;
        }
    }
    return (s);
}
