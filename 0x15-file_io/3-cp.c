#include "holberton.h"
/**
 * main - Main
 * @argc: argument count
 * @argv: arguments
 * Return: 0 if success, other errors if failure
 */
int main(int argc, char *argv[])
{
	int f;
	int f2;
	char BUFFER[1024];
	int i;
	int o;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
	}
	f = open(argv[1], O_RDONLY);

	f2 = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	for (i = 1024; i == 1024;)
	{
		i = read(f, BUFFER, 1024);
		if (i == -1)
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n",
			argv[1]), exit(98);
		o = write(f2, BUFFER, i);
		if (o == -1)
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n",
			argv[2]), exit(99);
	}
	o = close(f);



return (0);
}
