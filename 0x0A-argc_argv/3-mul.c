#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints result of the multiplication of command arguments
 *
 * @argc: number of arguments
 *
 * @argv: array of arguments
 *
 * Return: 1 if error, 0 if succed
 *
 */

int main(int argc, char *argv[])
{
	int result = atoi(argv[1]) * atoi(argv[2]);

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", result);

	return (0);
}
