#include "main.h"

/**
 * read_textfile - read a text file and print it
 * to the POSIX standard output
 *
 * @filename: the name of the file
 * @letters: the number of letters to read and print
 *
 * Return: the actual number of letters read and printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t read_letters, written_letters;
	char *buf;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(letters + 1);
	if (buf == NULL)
	{
		close(fd);
		return (0);
	}
	read_letters = read(fd, buf, letters);
	buf[letters] = '\0';
	written_letters = write(1, buf, read_letters);

	close(fd);
	free(buf);

	return (written_letters);
}
