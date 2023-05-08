#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * read_textfile - A function that reads a text file and prints it
 * to the POSIX standard ouptut
 * @filename: name of file
 * @letters: The actual number of letters it should read and print
 * Return: The actual number of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buff;
	int f_describe;
	ssize_t r_num, w_num;

	/* read the file into buffer */
	r_num = read(f_describe, buff, letters);
	/* Print buffer to standard output */
	w_num = write(STDOUT_FILENO, buff, r_num);
	/* If file name is NULL return 0 */
	if (filename == NULL)
		return (0);
	/* Open a read only file */
	f_describe = open(filename, O_RDONLY);

		/* If file is empty, return 0 */
		if (f_describe == -1)
			return (0);
	/* Allocate memory to buffer */
	buff = (char *) malloc(sizeof(char) * (letters));
	/* If memory buffer fails close file and return 0 */
	if (buff == NULL)
	{
		close(f_describe);
		return (0);
	}
	/* If file is unable to be read into buffer */
	if (r_num == -1)
	{
		free(buff);
		close(f_describe);
		return (0);
	}
	/* If file fails to print to standard output */
	if (w_num == -1 || w_num != r_num)
		return (0);
	/* free buffer and return number of read bytes */
	free(buff);
	close(f_describe);
	return (w_num);
}
