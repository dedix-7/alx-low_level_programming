#include "main.h"
/**
 * _strlen - get the length of a null terminated string
 * @str: string to find
 * Return: number of chars in str
 */
size_t _strlen(char *str)
{
	size_t len = 0;

	if (str == NULL)
		return (0);
	while (str[len])
		++len;
	return (len);
}
/**
 * append_text_to_file - appe nds some text to a file
 * @filename: name of the file and its path
 * @text_content: contrnt to e written
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fildes, len, writ;

	if (!(filename))
		return (-1);
	fildes = open(filename, (O_WRONLY | O_APPEND));
	if (fildes < 0)
		return (-1);
	len = (int) _strlen(text_content);
	writ = write(fildes, text_content, len);
	if (writ < 0)
		return (-1);
	close(fildes);
	return (1);
}
