#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the
 * POSIX standard output.
 * @filename: name of the file to read
 * @letters: number of letters
 * Return: number of letters to read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	int reading;
	int written;
	char *buffer;

	fd = open(filename, O_RDWR);

	if (fd == -1 || !filename)
		return (0);

	buffer = malloc(sizeof(char) * letters);

	if (!buffer)
		return (0);

	reading = read(fd, buffer, letters);

	if (reading == -1)
		return (0);

	written = write(STDOUT_FILENO, buffer, reading);

	free(buffer);

	close(fd);

	return (written);
}
