#include "holberton.h"

/**
 * append_text_to_file - Entry Point
 * @filename: file name
 * @text_content: text content
 * Return: 1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file, wr, i = 0;

	if (filename == NULL)
		return (-1);

	file = open(filename, O_RDWR | O_APPEND);
	if (file == -1)
		return (-1);



	while (text_content[i])
		i++;

	if (text_content == NULL)
	{
		close(file);
		return (1);
	}
	else
	{
		wr = write(file, text_content, i);
	}

	if (wr == -1)
		return (-1);

	close(file);
	return (1);
}
