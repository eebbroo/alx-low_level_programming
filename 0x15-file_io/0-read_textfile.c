#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the STDOUT
 *
 * @filename: string file name
 * @letters: number of letters
 *
 * Return: 0 if it fails
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t file, file_write;
	char *buf;

	if (filename == NULL)
		return (0);

	buf = malloc(sizeof(char) * letters);

	if (buf == NULL)
	{
		free(buf);
		return (0);
	}

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	file = read(fd, buf, letters);
	if (file == -1)
		return (0);

	file_write = write(STDOUT_FILENO, buf, file);
	if (file_write == -1)
		return (0);

	close(fd);
	free(buf);

	return (file);
}
