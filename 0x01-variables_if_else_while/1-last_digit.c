#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - print the last number of a variable
 *
 * Return: 0
 */
int main(void)
{
	int n;
	int lastn;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastn = n % 10

	if (n < 6 && n != 0)
	{
	printf("Last digit of %d is %d and is less than 6 and not 0", n, lastn);
	}
	else if (n > 5)
	{
	("Last digit of %d is %d and is greater than 5\n", n, lastn)
	}
	else
	{
	printf("Last digit of %d is %d and is 0\n", n, lastn)
	}
	return (0);
}
