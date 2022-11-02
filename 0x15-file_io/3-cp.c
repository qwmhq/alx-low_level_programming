#include "main.h"
#include <stdio.h>

/**
 * close_fd - close a file descriptor
 *
 * @fd: file descriptor
 */
void close_fd(int fd)
{
	int status;

	status = close(fd);
	if (status == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * copy_file - copy the contents of one file to another
 *
 * @source: name of source file
 * @dest: name of destination file
 */
void copy_file(char *source, char *dest)
{
	int fd1, fd2;
	ssize_t read_count, write_count;
	char *buf;

	buf = malloc(1024 * sizeof(char));
	if (buf == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", dest);
		exit(99);
	}

	fd1 = open(source, O_RDONLY);
	fd2 = open(dest, O_CREAT | O_TRUNC | O_WRONLY, 0664);
	do {
		read_count = read(fd1, buf, 1023);
		buf[read_count] = '\0';
		write_count = write(fd2, buf, read_count);
		if (fd1 == -1)
		{
			free(buf);
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", source);
			exit(98);
		}
		if (fd2 == -1 || write_count != read_count)
		{
			free(buf);
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", dest);
			exit(99);
		}
	} while (read_count == 1023);
	free(buf);
	close_fd(fd1);
	close_fd(fd2);
}

/**
 * main - program entry point
 *
 * @argc: argument count
 * @argv: array of argument values
 *
 * Return: always 0;
 */
int main(int argc, char **argv)
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	copy_file(argv[1], argv[2]);

	return (0);
}
