#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 *main - Entry point
 *
 *Describtion: A C program that print with if-else
 *
 *Return: Always 0 (success)
 */
int main(void)
{
		int n, last_digit;

			srand(time(0));
				n = rand() - RAND_MAX / 2;
					last_digit = n % 10
					if (n >  5)
						printf("The last digit of %d is %d and is greater than 5\n", n, last_digit);
					if (n < 6 && != 0)
						printf("The last digit of %d is %d and is less than 6 and not 0\n", n, last_digit);
					if (n == 0)
						printf("The last digit of %d is %d and is zero\n", n, last_digit);
					return (0);
}
