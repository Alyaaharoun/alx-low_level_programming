#include "main.h"
#include <unistd.h>
#include <string.h>

int _putchar(char c);
void puts_half(char *str);

int main(void)
{
char *str;

    str = "0123456789";
    puts_half(str);
    return (0);
}

int _putchar(char c)
{
		return (write(1, &c, 1));
}

void puts_half(char *str)
{
	int i;
	int l = 0;

	while (str[l] != '\0')
	{
		l++;
	}
	if ((l - 1) % 2 == 0)
	{
		for (i = l / 2; i < l; i++)
		{
			_putchar(str[i]);
		}
	}
	if ((l - 1) % 2 != 0)
	{
		int n = (l) / 2;
		for (i = n; i < l; i++)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
