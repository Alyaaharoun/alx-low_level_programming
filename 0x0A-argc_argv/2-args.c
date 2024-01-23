#include <stdio.h>

/**
 * main - function to print argument
 * @argc: first parameter
 * @argv: second parameter
 * Return: always 0(success)
*/

int main(int argc, char *argv[])
{
    int i;

    for(i =0; i < argc; i++)
    {
        printf("%s/n", argv[i]);
    }
}
