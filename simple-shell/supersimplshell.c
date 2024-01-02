#include "main.h"

#define CMD 1024
/**
 * countstring - counts the number of a times acharcter appears in a string
 * @str: string to use
 * @n: char to find and count
 * Return: number of times the chracters was in the string
 */
int countstring(char *str, char n)
{
	int i = 0, times = 0;

	while (str[i])
	{
		if (str[i] == n)
			++times;
	}
	return (times);
}
/**
 * main - supersimple shell
 * Return - 0 on success
 */
int main(void)
{
	char *cmd, **argv;
	size_t bytes, i = 0;
	ssize_t getl;
	int len;

	getl = getline(&cmd, &bytes, stdin);
	if (get < 0)
	{
		perror("Can't read from stdin");
		exit(EXIT_FAILURE);
	}
	cmd = strtok(cmd, "\n");
	len = countstring(cmd, " ");
	argv = malloc(len * (sizeof(char **)));
	argv[i] = strtok(cmd, " ");
	i++;
	for (i = 1; i < len; i++)
	{
		argv
	return (0);
}
