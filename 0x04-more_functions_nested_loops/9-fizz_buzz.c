#include <stdio.h>
/**
 * main - prints all numbers and change multiples of 3 and 5 for FizzBuzz
 *
 * Return: 0
 *
 */

int main(void)
{
	int n;

	for (n = 1; n <= 100; n++)
	{
		if ((n % 3) == 0 && (n % 5) != 0)
		{
			printf("Fizz ");
		}
		else if ((n % 5) == 0 && (n % 3) != 0)
		{
			printf("Buzz");
			
			if (n != 100)
			{
				printf(" ");
			}
		}
		else if ((n % 5) == 0 && (n % 3) == 0)
		{
			printf("FizzBuzz");
		}
		else
		{
			printf("%d ", n);
		}
	}
	printf("\n");
	return (0);
}
