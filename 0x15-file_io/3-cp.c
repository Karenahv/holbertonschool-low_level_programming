#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <fcntl.h>
#include "holberton.h"
#include <unistd.h>

/**
 * main - copy the content of a file to another file.
 * @argc: number of arguments.
 * @argv: arguments
 * Return: 0 on sucess
 */
int main(int argc, char *argv[])
{
	int fd, fd2, w;
	ssize_t sz = 1024;
	char *buf[1024];

	if (argc != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97); }
	fd = open(argv[1], O_RDWR);
	if (fd == -1)
	{
		dprintf(2, "Error: Can't read from file %s", argv[1]);
		exit(98); }
	fd2 = open(argv[2], O_CREAT | O_TRUNC | O_RDWR, 0664);
	if (fd2 == -1)
	{
		dprintf(2, "Error: Can't write to %s", argv[2]);
		exit(99); }
	while (sz == 1024)
	{
		sz = read(fd, buf, 1024);
		if (sz == -1)
		{
			dprintf(2, "Error: Can't read from file %s", argv[1]);
			exit(98); }
		w = write(fd2, buf, sz);
		if (w == -1)
		{
			dprintf(2, "Error: Can't write to %s", argv[2]);
			exit(99); }}
	if (close(fd) < 0)
	{
		dprintf(2, "Can't close fd %d\n", fd);
		exit(100); }
	if (close(fd2) < 0)
	{
		dprintf(2, "Can't close fd %d\n", fd2);
		exit(100); }
	return (0);
}
