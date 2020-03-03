#include <stdio.h>
/**
 * main - prints all command arguments
 *
 * @argc: number of command arguments
 *
 * @argv: array of command arguments to print
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
