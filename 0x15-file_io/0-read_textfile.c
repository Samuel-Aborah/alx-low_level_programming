#include "main.h"

/**
 * read_textfile - A function that reads a text file and prints
 * it to the POSIX standard output
 * @filename: Name of the file
 * @letters: Number of letters it should read and print
 * Return: Actual number of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int file_describe;
	ssize_t read_num, wryt_num;
	char *buff;

	if (filename == NULL)
		return (0);

	buff = (char *) malloc(sizeof(char) * letters);

	if (buff == NULL)
		return (0);

	file_describe = open(filename, O_RDONLY);

	if (file_describe == -1)
	{
		free(buff);
		return (0);
	}

	read_num = read(file_describe, buff, letters);
	if (read_num == -1)
	{
		free(buff);
		close(file_describe);
		return (0);

	}
	wryt_num = write(STDOUT_FILENO, buff, read_num);

	free(buff);
	close(file_describe);

	if (wryt_num == -1 || wryt_num != read_num)
		return (0);

	return (wryt_num);
}
