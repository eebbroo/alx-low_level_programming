#include "main.h"

/**
 * create_file - creates a file
 *
 * @filename: name of the file to create
 * @text_content: string to write
 *
 * Return: 1 on success or -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int fd, len = 0;
	char *copy;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_CREAT | O_TRUNC | O_WRONLY, 0600);
	if (fd == -1)
		return (-1);
	copy = text_content;
	if (text_content != NULL)
	{
		copy = text_content;
		while (*copy != '\0')
		{
			len++;
			copy++;
		}
		if (write(fd, text_content, len) != len)
			return (-1);
	}
	close(fd);
	return (1);
}
