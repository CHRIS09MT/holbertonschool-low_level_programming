#include "main.h"

/**
* create_file - create a file
* @filename: name of the file to be created
* @text_content: content to be written to the file,
* if NULL, create an empty file
* Return: return 1 if successful
 */

int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t bytes_written;

	if (filename == NULL)
		return (-1);

	/** A file is created, type write, with permissions 600 */
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (fd == -1)
		return (0);

	if (text_content != NULL)
		bytes_written = write(fd, text_content, strlen(text_content));

	if (bytes_written == -1)
	{
		close(fd);
		return (-1);
	}

	close(fd);
	return (1);
}
