#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * create_file - A function that creates a file
 * @filename: Name of file to create
 * @text_content: A null terminated string to write to the file
 * Return: 1 on success or -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int file_describe, length;

	file_describe = open(filename, O_CREAT | O_WRONLY | O_TRUNC,
			S_IRUSR | S_IWUSR);

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		length = strlen(text_content);

		if (write(file_describe, text_content, length) != length)
		{
			close(file_describe);
			return (-1);
		}
	}

	close(file_describe);
	return (1);
}
