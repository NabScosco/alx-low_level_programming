#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include "main.h"

#define BUFFER_SIZE 1024

/**
 * error_exit - prints an error message and exits with a given code
 * @code: the exit code
 * @message: the error message
 */

void error_exit(int code, char *message)
{
	dprintf(STDERR_FILENO, "%s\n", message);
	exit(code);
}

/**
 * main - entry point of the program
 * @argc: the number of arguments
 * @argv: the array of arguments
 * Return: 0 on success, 97-100 on error
 */

int main(int argc, char **argv)
{
	int source_fd, dest_fd, bytes_read, bytes_written;
	char buffer[BUFFER_SIZE];

	if (argc != 3)
		error_exit(97, "Usage: cp file_from file_to");

	source_fd = open(argv[1], O_RDONLY);
	if (source_fd == -1)
		error_exit(98, "Error: Can't read from file %s", argv[1]);

	dest_fd = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0644);
	if (dest_fd == -1)
	{
		close(source_fd);
		error_exit(99, "Error: Can't write to %s", argv[2]);
	}

	while ((bytes_read = read(source_fd, buffer, BUFFER_SIZE)) > 0)
	{
		bytes_written = write(dest_fd, buffer, bytes_read);
		if (bytes_written != bytes_read)
		{
			close(source_fd);
			close(dest_fd);
			error_exit(99, "Error: Can't write to %s", argv[2]);
		}
	}

	if (bytes_read == -1)
	{
		close(source_fd);
		close(dest_fd);
		error_exit(98, "Error: Can't read from file %s", argv[1]);
	}

	if (close(source_fd) == -1)
		error_exit(100, "Error: Can't close fd %d", source_fd);

	if (close(dest_fd) == -1)
		error_exit(100, "Error: Can't close fd %d", dest_fd);
	return (0);
}
