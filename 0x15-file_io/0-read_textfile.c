#include "main.h"
#include <sys/stat.h>
#include <stdlib.h>

#ifndef STDOUT_FILENO
#define STDOUT_FILENO 1
#endif

#ifndef NULL
#define NULL 0
#endif

/**
 * read_textfile - read textfile
 * @filename: first input
 * @letters: second input
 *
 * Return: ssize_t
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t read_chars, written;
	char *buffer;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		close(fd);
		return (0);
	}
	read_chars = read(fd, buffer, letters);
	close(fd);
	if (read_chars == -1)
	{
		free(buffer);
		return (0);
	}
	written = write(STDOUT_FILENO, buffer, read_chars);
	free(buffer);
	if (read_chars != written)
		return (0);
	return (written);
}
