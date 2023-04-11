#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the standard output
 * @filename: the name of the file to read
 * @letters: the maximum number of characters to read and print
 * Return: the actual number of characters read and printed, or 0 if an error occurred
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t nread, nwritten, total = 0;
	char *buf;

	if (filename == NULL)
		return (0);

	buf = malloc(letters);
	if (buf == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		free(buf);
		return (0);
	}

	nread = read(fd, buf, letters);
	if (nread == -1)
	{
		free(buf);
		close(fd);
		return (0);
	}

	while (nread > 0)
	{
		nwritten = write(STDOUT_FILENO, buf + total, nread);
		if (nwritten == -1)
		{
			free(buf);
			close(fd);
			return (0);
		}

		total += nwritten;
		nread -= nwritten;
	}

	free(buf);
	close(fd);

	return (total);
}
