#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include "main.h"

#define STDOUT_FILENO 1

int init_files(int *file_from, int *file_to, char *from_name, char *to_name);
int close_files(int file_to, int file_from, char *from_name, char *to_name);

/**
 * main - copies the content of a file to another file
 * @ac: first input
 * @av: second input
 *
 * Return: ssize_t
 */
int main(int ac, char **av)
{
	int file_from, file_to, i = 0, r = 0;
	char buff[1025];
	char *nameof_file_from, *file_to_name;

	if (ac != 3)
	{
		fprintf(stderr, "Usage: cp file_from file_to\n");
		exit(97);
	}

	nameof_file_from = av[1];
	file_to_name = av[2];

	i = init_files(&file_from, &file_to, nameof_file_from, file_to_name);
	if (i)
		exit(i);

	while ((r = read(file_from, buff, 1024)) != 0)
	{
		if (r < 0)
		{
			fprintf(stderr, "Error: Can't read from file %s\n", nameof_file_from);
			return (98);
		}
		buff[r] = 0;
		if (write(file_to, buff, r) <= 0)
		{
			fprintf(stderr, "Error: Can't write to %s\n", file_to_name);
			exit(99);
		}
	}

	if (close_files(file_from, file_to, nameof_file_from, file_to_name))
		exit(100);

	return (0);
}

/**
 * close_files - close files
 * @file_to: first input
 * @file_from: second input
 * @from_name: third input
 * @to_name: fourth input
 *
 * Return: int
 */
int close_files(int file_to, int file_from, char *from_name, char *to_name)
{
	if (close(file_to) == -1)
	{
		fprintf(stderr, "Error: Can't close fd %s\n", to_name);
		return (1);
	}
	if (close(file_from) == -1)
	{
		fprintf(stderr, "Error: Can't close fd %s\n", from_name);
		return (1);
	}

	return (0);
}

/**
 * init_files - init files
 * @file_from: first input
 * @file_to: second input
 * @from_name: third input
 * @to_name: fourth input
 *
 * Return: int
 */
int init_files(int *file_from, int *file_to, char *from_name, char *to_name)
{
	*file_from = open(from_name, O_RDONLY);
	if (*file_from == -1)
	{
		fprintf(stderr, "Error: Can't read from file %s\n", from_name);
		return (98);
	};

	*file_to = open(to_name, O_CREAT | O_TRUNC | O_RDWR);
	if (*file_to == -1)
	{
		fprintf(stderr, "Error: Can't write to %s\n", to_name);
		return (99);
	}

	return (0);
}
