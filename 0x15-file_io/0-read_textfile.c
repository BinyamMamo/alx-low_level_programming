#include "main.h"
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * read_textfile - read textfile
 * @filename: first input
 * @letters: second input
 *
 * Return: ssize_t
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file;
	char *buff = NULL;
	ssize_t read_chars = 0, chars_written = 0;

	if (filename == NULL)
		return (0);

	file = open(filename, O_RDONLY);

	if (file == -1)
		return (0);

	buff = malloc(sizeof(*buff) * letters);
	if (buff == NULL)
	{
		close(file);
		return (0);
	}

	read_chars = read(file, buff, letters);

	close(file);
	if (read_chars == -1)
	{
		free(buff);
		return (0);
	}

	chars_written = write(STDOUT_FILENO, buff, read_chars);

	free(buff);

	if (chars_written != read_chars)
		return (0);

	return (chars_written);
}
