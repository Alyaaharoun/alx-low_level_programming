#include <stdio.h>
#include "main.h"
#include <stdlib.h>
#include <unistd.h>

/**
 * main - function to multiply two numbers
 * @argc: first parameter
 * @argv: second parameter
 * Return: always 0(success)
*/

int _putchar(char c);
int **alloc_grid(int width, int height);

void print_grid(int **grid, int width, int height)
{
    int w;
    int h;

    h = 0;
    while (h < height)
    {
        w = 0;
        while (w < width)
        {
            printf("%d ", grid[h][w]);
            w++;
        }
        printf("\n");
        h++;
    }   
}
int main(int argc, char *argv[])
{
int **grid;

    grid = alloc_grid(6, 4);
    if (grid == NULL)
    {
        return (1);
    }
    print_grid(grid, 6, 4);
    printf("\n");
    grid[0][3] = 98;
    grid[3][4] = 402;
    print_grid(grid, 6, 4);
    return (0);
}

int _putchar(char c)
{
	return (write(1, &c, 1));
}

int **alloc_grid(int width, int height)
{
    int i, j;
	int **array;
    int t = width * height;

    if (t <= 0)
        return (NULL);
    array =(int **) malloc(sizeof(int *) * height);
    if (array == NULL)
        return (NULL);
    for (i = 0; i < height; i++)
    {
        array[i] =(int *)malloc(sizeof(int) * width);
        if (array[i] == NULL)
        {
            for (i--; i >= 0; i--)
                free(array[i]);
            free(array);
            return(NULL);
        }
    }
    for (i =0; i < height; i++)
    {
        for (j = 0; j < width; j++)
            array[i][j] = 0;
    }
    return (array);
}
