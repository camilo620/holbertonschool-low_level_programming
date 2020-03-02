#include <stdlib.h>
#include <stdio.h>
/**
 * main - prints name of the program
 *
 * @argc: counts the command lines of the program
 *
 * @argv: array of command lines of the program
 *
 * Return: 0
 *
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);

	return (0);
}
