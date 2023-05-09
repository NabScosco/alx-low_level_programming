#include "main.h"

/**
 * main - entry point function
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 on success, otherwise error code
 */
int main(int argc, char *argv[])
{
	int fd_from, fd_to, r = 0, w = 0;
	char buf[1024];

	if (argc != 3)
		return (dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), 97);
	fd_from = open(argv[1], O_RDONLY);
	if (fd_from < 0)
		return (dprintf(STDERR_FILENO, "Error: Can't read %s\n", argv[1]), 98);
	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_to < 0)
		return (dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), 99);
	while ((r = read(fd_from, buf, 1024)) > 0)
	{
		w = write(fd_to, buf, r);
		if (w < r)
			return (dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), 99);
	}
	if (r < 0)
		return (dprintf(STDERR_FILENO, "Error: Can't read %s\n", argv[1]), 98);
	if (close(fd_from) < 0)
		return (dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_from), 100);
	if (close(fd_to) < 0)
		return (dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_to), 100);
	return (0);
}
