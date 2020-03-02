#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - Adds arguments
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int sum = 0;
	int counter1;
	int counter2;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}
	else
	{
		for (counter1 = 1z; counter1 < argc; counter1++)
		{

			for (counter2 = 0; argv[counter1][counter2] != 0; counter2++)
			{
				if (!isdigit(argv[counter1][counter2]))
				{
					printf("Error\n");
					return (1);
				}
			}
			sum += atoi(argv[counter1]);
		}
		printf("%d\n", sum);
	}
	return (0);
}
