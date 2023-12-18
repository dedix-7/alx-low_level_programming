#include "main.h"
/**
 * read_textfile - read from a text file then print elsewhere
 * @filename: path to the file
 * @letters: number of letters to print
 * Return: number of letters read and printed or 0mon failure
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fildes;
	ssize_t read_bytes, writ_bytes;
	char *buf;

	if (!(filename))
		return (0);
	fildes = open(filename, O_RDONLY);
	if (fildes == -1)
		return (0);
	buf = malloc((sizeof(char)) * letters);
	if (!(buf))
		return (0);
	read_bytes = read(fildes, buf, letters);
	if (read_bytes = -1)
		return (0);
	writ_bytes = write(STDOUT_FILENO, buf, letters);
	if (writ_bytes != letters)
		return (0);
	free(buf);
	return (writ_bytes);
}
