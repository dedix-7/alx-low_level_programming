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
	ssize_t read_bytes;
	ssize_t writ_bytes;
	char *buf;

	if (!(filename))
		return (0);
	fildes = open(filename, O_RDONLY);
	if (fildes == -1)
		return (0);
	buf = malloc((sizeof(char)) * letters);
	if (!(buf))
	{
		close(fildes);
		return (0);
	}
	read_bytes = read(fildes, buf, letters);
	if ((read_bytes < 0))
	{
		close(fildes);
		free(buf);
		return (0);
	}
	writ_bytes = write(STDOUT_FILENO, buf, read_bytes);
	if (((size_t) writ_bytes != (size_t) read_bytes) || (writ_bytes < 0))
	{
		close(fildes);
		free(buf);
		return (0);
	}
	free(buf);
	close(fildes);

	return (read_bytes);
}
