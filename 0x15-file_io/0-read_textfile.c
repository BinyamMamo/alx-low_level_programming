#include "main.h"
#include <sys/stat.h>
#include <stdio.h>

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
	int file;
	char c = '0';
	int i = 0;
	size_t j = 0;

	if (filename == NULL)
		return (0);

	file = open(filename, O_RDONLY);

	if (file == -1)
		return (0);

	i = read(file, &c, 1);
	if (i < 0)
	{
		close(file);
		return (0);
	}
	while (i != 0 && j < letters)
	{
		if (i < 0)
		{
			close(file);
			return (0);
		}

		if (write(STDOUT_FILENO, &c, 1) <= 0)
		{
			close(file);
			return (0);
		}
		j++;
		i = read(file, &c, 1);
	}
	close(file);
	return (j);
}
