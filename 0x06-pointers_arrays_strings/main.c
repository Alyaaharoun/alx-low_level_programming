#include "main.h"
#include <unistd.h>
#include <string.h>

int _putchar(char c);
char *cap_string(char *s);

int main(void)
{
char str[] = "Expect the best. Prepare for the worst. Capitalize on what comes.\nhello world! hello-world 0123456hello world\thello world.hello world\n";
    char *ptr;

    ptr = cap_string(str);
    printf("%s", ptr);
    printf("%s", str);
    return (0);
}

int _putchar(char c)
{
		return (write(1, &c, 1));
}

char *cap_string(char *s)
{
    int i, j;
    char sp[13] = {' ', '\n', '\t', ',', ';', '.', '!', '?', '"', '(', ')', '{', '}'};

    for (i = 0; s[i] != '\0'; i++)
    {
        if (i == 0 && s[i] >= 'a' && s[i] <= 'z')
        {
            s[i] = s[i] - 32;
        }
        for (j = 0; j < 13; j++)
        {
            if (s[i] == sp[j])
            {
                if (s[i + 1] >= 'a' && s[i + 1] <= 'z')
                {
                    s[i + 1] = s[i + 1] - 32;
                }
            }
        }
    }
    return (s);
}
