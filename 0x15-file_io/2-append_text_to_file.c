#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * append_text_to_file - A function that appends text at
 * the end of a file
 * @filename: Name of the file
 * @text_content: NULL terminated string to add at the end of
 * the file
 * Return: 1 on success or -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int len, wryt, file_describe;

	/* If file name is incorrect, return -1 */
	if (filename == NULL)
		return (-1);

	/* Open a writing file, and append to end */
	file_describe = open(filename, O_WRONLY | O_APPEND);

	/* If the file is unable to open */
	if (file_describe == -1)
		return (-1);

	if (text_content != NULL)
	{
		len = strlen(text_content);
		wryt = write(file_describe, text_content, len);

		if (wryt != len)
		{
			close(file_describe);
			return (-1);

		}
	}
	close(file_describe);
	return (1);


}
