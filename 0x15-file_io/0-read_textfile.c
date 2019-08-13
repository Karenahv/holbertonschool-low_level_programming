#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <fcntl.h>
#include "holberton.h"
#include <unistd.h>

/**
 * read_textfile - returns the actual number of letters it could read and print
 * @filename: file to read and print
 * @letters: number of letters to print
 * Return: the number or letters
 */
ssize_t read_textfile(const char *filename, size_t letters)
{

	int fd, sz;
	char *buf;

	if (filename == NULL)
		return (0);
	buf = malloc(letters * sizeof(char));
	if (buf == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	sz = write(STDOUT_FILENO, buf, read(fd, buf, letters));
	if (sz == -1)
		return (0);
	close(fd);
	free(buf);
	return (sz);


}
