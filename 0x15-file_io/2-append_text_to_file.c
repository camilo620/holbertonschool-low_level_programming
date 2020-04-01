#include "holberton.h"
/**
 * append_text_to_file - appends text at the end of a file.
 * @filename: name of the file
 * @text_content: text to be appended
 * Return: 1 if successful, -1 if failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int f;
	int text;
	int i;

	if (filename != 0)
	{
		if (text_content == 0)
		{
			return (1);
		}
			
		f = open(filename, O_RDWR | O_APPEND);

		if (f == -1)
		{
			return (-1);
		}

		for (i = 0; text_content[i]; i++)
		{
		}

		text = write(f, text_content, i);
		if (text == -1)
		{
			return (-1);
		}
		close(f);
		return (1);
	}
	return (-1);
}
