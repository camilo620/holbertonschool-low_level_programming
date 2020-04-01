#include "holberton.h"
/**
 * read_textfile -  reads a text file and prints it to the POSIX std output
 * @filename: file name
 * @letters: number of letter to print
 * Return: The actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int d;
	int i;
	int r;
	int x;
	char *buffer;

	if (filename)
	{
		d = open(filename, O_RDONLY);
		if (d == -1)
			return (0);
		buffer = malloc(sizeof(char) * letters);
		if (!buffer)
			return (0);
		r = read(d, buffer, letters);
		if (r == -1)
		{
			free(buffer);
			return (0);
		}
		i = write(STDOUT_FILENO, buffer, r);
		if (i == -1)
		{
			free(buffer);
			return (0);
		}
		if (r != i)
		{
			free(buffer);
			return (0);
		}
		free(buffer);
		x = close(d);
		if (x == -1)
			return (0);
		return (i);
	}
	return (0);
}
