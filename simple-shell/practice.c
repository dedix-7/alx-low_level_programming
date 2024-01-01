#include <sys/types.h>
#include <unistd.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/wait.h>
/**
 * main - test about pids
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	pid_t parentid, processid;
	int i = 1;
	ssize_t line;
	size_t read = 0;
	char *linepoint = NULL, *str;
	(void) argc;

        parentid = getppid();
	processid = getpid();

	printf("The process id is %d \n while the child id is %d\n", processid, parentid);
	while (argv[i])
	{
		printf("%s is argument %d \n", argv[i], i);
		++i;
	}
	printf("The first argument split using strktok\n");
	str = strtok(argv[1], " ");
	printf("\n%s ", str);
	while (str)
	{
		str = strtok(NULL, " ");
		if (!(str))
			break;
		printf("\n%s\n", str);
	}
	while (1)
	{
		printf("myshell press r to quit$ ");
		line = getline(&linepoint, &read, stdin);
		printf("%s ", linepoint);
		printf("\n You entered %ld bytes \n", read);
		if (line == -1)
			break;
		if (*linepoint == 'r')
			break;
	}
	free (linepoint);
	return (0);
}
