#include "main.h"
#include <unistd.h>
#include <string.h>

int _putchar(char c);
void puts2(char *str);

int main(void)
{
char *str;

    str = "0123456789";
    puts2(str);
    return (0);
}

int _putchar(char c)
{
		return (write(1, &c, 1));
}

void puts2(char *str)
{

	int i = 0;
	for (i = 0; str[i] != '\0'; ++i)
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
