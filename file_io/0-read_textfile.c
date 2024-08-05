#include "main.h"
#include <sys/types.h>
#include <unistd.h>

/**
* read_textfile - read a text file
* @filename: the name of the file to read
* @letters: the maximum number of letters to read
* Return: return the number of letters read from the file
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t bytes_read;
	char *buffer;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY); /** Open file */

	if (fd == -1)
		return (0);

	buffer = malloc(letters + 1); /** Allocate memory for buffer */

	if (buffer == NULL)
		return (0);

	bytes_read = read(fd, buffer, letters); /** Read file into buffer */

	if (bytes_read == -1)
		return (0);

		/** Prints the read content and amount bytes read */
	write(STDOUT_FILENO, buffer, bytes_read);

	free(buffer);
	close(fd);

	return (bytes_read);
}
