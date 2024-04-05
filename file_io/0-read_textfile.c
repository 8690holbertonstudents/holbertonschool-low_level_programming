
#include "main.h"
/**
 * read_textfile - reads a text file and prints
 * it to the POSIX standard output.
 * @filename: pointer to filename from main
 * @letters: unsigned int number of letters to read and print
 * Return: the actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int n, fd;
	char buffer[2048];
	ssize_t b_write;

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	n = read(fd, buffer, letters);

	if (n < 0)
		return (0);

	b_write = write(1, buffer, letters);
	b_write = write(2, buffer, letters);

	if (b_write == -1)
		return (0);

	close(fd);
	return (n);
}
