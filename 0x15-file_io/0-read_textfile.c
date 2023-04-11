#include "main.h"

/**
 * read_textfile - This reads a text file and prints it to stdout
 * @filename: The name of the file to read
 * @letters: The number of letters to read from file
 * Return: The actual number of letters read and printed
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, n_read;
	char *buf;

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buf = malloc(sizeof(char) * (letters + 1));
	if (!buf)
		return (0);

	n_read = read(fd, buf, letters);
	if (n_read == -1)
	{
		free(buf);
		close(fd);
		return (0);
	}

	buf[n_read] = '\0';
	if (write(STDOUT_FILENO, buf, n_read) != n_read)
	{
		free(buf);
		close(fd);
		return (0);
	}

	free(buf);
	close(fd);

	return (n_read);
}
