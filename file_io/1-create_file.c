#include "main.h"
/**
 * create_file - function that create a file
 * @filename: pointer to filename from main
 * @text_content: is a NULL terminated string to write to the file
 * Return: 1 on success, -1 on failure (file can not be created,
 * file can not be written, write “fails”, etc…)
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	size_t i = 0;
	char buffer[2048];
	ssize_t b_write;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_TRUNC | O_CREAT, 0600);

	if (fd == -1)
		return (0);

	if (text_content == NULL)
		text_content = "";

	while (text_content[i] != '\0')
		i++;

	b_write = write(fd, buffer, i);

	if (b_write == -1)
		return (0);

	close(fd);
	return (1);
}

