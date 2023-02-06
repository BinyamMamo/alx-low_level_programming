#include <stdlib.h>
// #include <unistd.h>
// #include <stdio.h>
#include <fcntl.h>
#include "main.h"

#define STDOUT_FILENO 1

ssize_t read_textfile(const char *filename, size_t letters)
{
	int file;
	char c;
	int i = 0;
	size_t j = 0;

	/**
	 * if file name is null return 0
	 */
	if (filename == NULL)
		return (0);

	file = open(filename, O_RDONLY | O_RDWR);
	/**
	 * if file could not be opened return 0
	 */
	if (file == -1)
		return (0);

	while (i = read(file, &c, 1) != 0 && j < letters)
	{
		if (i < 0)
			return (0);
		/**
		 * if write fails it returns -1
		 * and
		 * if write could not write the expected amount of bytes it return 0
		 * so checking if the return value gets below or equal to 0
		 * will do the job of avoiding errors
		 */
		if (write(STDOUT_FILENO, &c, 1) <= 0)
			return (0);
		j++;
	}

	return j;
}