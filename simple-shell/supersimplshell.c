#include "main.h"

#define CMD 1024
/**
 * countstring - counts the number of a times acharcter appears in a string
 * @str: string to use
 * @n: char to find and count
 * Return: number of times the chracters was in the string
 */
int countstring(char *str, char *n)
{
	int i = 0, times = 0;

	while (str[i])
	{
		if (str[i] == *n)
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
	char *cmd = NULL, **argv;
	size_t bytes;
	ssize_t getl;
	int len, exe,i = 0, status = CMD;
	pid_t child;

	printf("myshell $:");
	getl = getline(&cmd, &bytes, stdin);
	if (getl < 0)
	{
		perror("Can't read from stdin");
		exit(EXIT_FAILURE);
	}
	cmd = strtok(cmd, "\n");
	len = countstring(cmd, " ");
	if (len == 0)
	{
		argv = malloc(2 * (sizeof(char **)));
		if (!(argv))
		{
			perror("Not enough memory");
			exit(EXIT_FAILURE);
		}
		argv[0] = cmd;
		argv[1] = NULL;
	}
	else
	{
		argv = malloc(len * (sizeof(char **)));
		argv[i] = strtok(cmd, " ");
		i++;
		for (i = 1; i < len; i++)
			argv[i] = strtok(cmd, " ");
	}
	while (1)
	{
		child = fork();
		printf("myshell $:");
		if (child == 0)
		{
			exe = execve(argv[0], argv, NULL);
			if (exe == -1)
			{
				perror("Can't execute command");
				exit(EXIT_FAILURE);
			}
		}
		else
		{
			wait(&status);
			printf("\nPlease enter next command\n");
		}
	}
	return (0);
}
