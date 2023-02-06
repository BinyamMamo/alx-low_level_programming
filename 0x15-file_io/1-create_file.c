#include "main.h"

#define STDOUT_FILENO 1
#define NULL 0

/**
 * create_file - reads textfile
 * @filename: first input
 * @text_content: second input
 *
 * Return: ssize_t
 */
int create_file(const char *filename, char *text_content)
{
	int file;

	/**
	 * if file name is null return -1
	 */
	if (filename == NULL)
		return (-1);

	file = open(filename, O_CREAT | O_TRUNC | O_RDWR);
	/**
	 * if file could not be opened return -1
	 */
	if (file == -1)
		return (-1);

	if (text_content != NULL)
		while (*text_content)
		{
			/**
			 * if write fails it returns -1
			 * and
			 * if write could not write the expected amount of bytes it return 0
			 * so checking if the return value gets below or equal to 0
			 * will do the job of avoiding errors
			 */
			if (write(file, text_content, 1) <= 0)
				return (-1);
			text_content++;
		}
	close(file);
	return (1);
}
