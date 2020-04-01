#include "holberton.h"
/**
 * create_file - Create a file
 * @filename: name of the file
 * @text_content: text to be write in the file
 * Return: 1 if succesful, 0 if not
 */
int create_file(const char *filename, char *text_content)
{
	int f;
	int text;
	int i;

	if (filename)
	{
		f = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
		if (f == -1)
			return (-1);
		if (text_content == 0)
			return (1);
		for (i = 0; text_content[i] != 0; i++)
			;
		text = write(f, text_content, i);
		close(f);
		return (1);
	}
	return (-1);
}
