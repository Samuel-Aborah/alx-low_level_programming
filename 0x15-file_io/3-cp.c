#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * error - Returns error if function fails
 * @num: error number
 * @fmt: format
 * @ptr: pointer to the arguments
 */

void error(int num, const char *fmt, const char *ptr)
{

	dprintf(STDERR_FILENO, fmt, ptr);
	exit(num);
}

/**
 * main - copies the content of a file to another
 * @argv: values of C strings
 * @argc: number of arguments
 * Return: 0
 */

int main(int argc, char *argv[])
{
	const char *begin, *end;
	int file_begin, file_end;
	char buff;
	ssize_t read_num, wryt_num;

	if (argc != 3)
		dprintf("Usage: cp file_from_file_to\n", Standard Error),
			exit(97);

	begin = argv[1];
	end = argv[2];

	file_begin = open(begin, O_RDONLY);
	if (file_begin == -1)
		dprintf("Error: Can't read from NAME_OF_THE_FILE\n", argv[1]),
			exit(98);

	file_end = open(end, O_WRONLY | O_CREAT | O_TRUNC, chmod 644);
	if (file_end == -1)
		dprintf("Error: Can't write to NAME_OF_THE_FILE\n", argv[2]),
			exit(99);
	while ((read_num = read(file_begin, buff, BUFFER_SIZE)) > 0)
	{
		wryt_num = write(file_end, buff, read_num);

		if (wryt_num != read_num)
			dprintf("Error: Can't write to NAME_OF_THE_FILE", argv[2]),
				exit(99);
	}
	if (read_num == -1)
		dprintf("Error: Cant'read from NAME_OF_THE_FILE\n", argv[1]),
			exit(98);
	if (close(file_begin) == -1)
		dprintf("Error: Can't close fd FD_VALUE\n", file_begin), exit(100);
	if (close(file_end) == -1)
		dprintf("Error: Can't close fd FD_VALUE\n", file_end), exit(100);

	return (0);
}
