#include "main.h"
#include <sys/stat.h>

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
	ssize_t read, written;
	char *buff;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buff = malloc(sizeof(char) * letters);
	if (buff == NULL)
	{
		close(fd);
		return (0);
	}
	read = read(fd, buff, letters);
	close(fd);
	if (read == -1)
	{
		free(buff);
		return (0);
	}
	written = write(STDOUT_FILENO, buff, read);
	free(buff);
	if (read != written)
		return (0);
	return (written);
}
