#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the standard output
 *
 * @filename: name of the file to be read
 * @letters: number of letters to read and print
 *
 * Return: the number of letters printed, or 0 if it failed
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fileDescriptor;
	int i, y;
	char *buffer;

	if (!filename)
		return (0);
	fileDescriptor = open(filename, O_RDONLY);
	if (fileDescriptor < 0)
		return (0);
	buf = malloc(sizeof(char) * letters);
	if (!buf)
		return (0);
	i = read(fileDescriptor, buf, letters);
	if (i < 0)
	{
		free(buf);
		return (0);
	}
	buf[i] = '\0';
	close(fileDescriptor);
	y = write(STDOUT_FILENO, buf, i);
	if (y < 0)
	{
		free(buf);
		return (0);
	}
	free(buf);
	return (y);
}
