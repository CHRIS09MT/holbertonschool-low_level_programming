#include "main.h"
#include <sys/types.h>

/**
* append_text_to_file - write a text to end of file
* @filename: name of the file
* @text_content: content to be written to the file
* Return: success return 1
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t write_end;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND | O_CREAT | O_TRUNC, 0600);

	if (fd == -1)
		return (-1);

	if (text_content != NULL)
		write_end = write(fd, text_content, strlen(text_content));

	if (write_end == -1)
	{
		close(fd);
		return (-1);
	}

	close(fd);
	return (1);
}
