#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

/**
 * error_exit - prints an error message and exits with a given code
 * @code: the exit code
 * @msg: the message to print
 */
void error_exit(int code, const char *msg)
{
	dprintf(STDERR_FILENO, "%s\n", msg);
	exit(code);
}

/**
 * main - this function copies a file to another file
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: return 0 on success
 */

int main(int argc, char *argv[])
{
	int file_from, file_to;
	char buffer[1024];
	ssize_t bytes_read, bytes_written;

	if (argc != 3)
		error_exit(97, "Usage: cp file_from file_to");

	file_from = open(argv[1], O_RDONLY);
	if (file_from == -1)
		error_exit(98, "Error: Can't read from file");

	file_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (file_to == -1)
		error_exit(99, "Error: Can't write to file");

	while ((bytes_read = read(file_from, buffer, sizeof(buffer))) > 0)
	{
		bytes_written = write(file_to, buffer, bytes_read);
		if (bytes_written != bytes_read)
			error_exit(100, "Error: Can't write to file");
	}

	if (bytes_read == -1)
		error_exit(98, "Error: Can't read from file");

	close(file_from);
	close(file_to);
	return (0);
}
