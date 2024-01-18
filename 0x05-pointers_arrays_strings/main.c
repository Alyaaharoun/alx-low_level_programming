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
	while ( str[i] != '\0')
	{
		_putchar(str[i]);
		i = i + 2;
	}
	_putchar('\n');
}
