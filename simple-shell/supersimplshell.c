#include "main.h"
/**
 * @argc: count of arguments
 * @argv: vector arrsy
 * @envp: emvironment variable
 * Return: 0 on success
 */
int main(int argc, char **argv, char **envp)
{
	pid_t child;
	char *line, *lim[2];
	int ret, status, exe;
	size_t bytes;
	(void) argc;
	(void) argv;
	(void) envp;

	while (1)
	{
		printf("We are in %u process i.e. parent\n", getpid());
		printf("myshell $: ");
		ret = getline(&line, &bytes, stdin);
		if (ret < 0)
		{
			perror("can't read fron stdin\n");
			exit(EXIT_FAILURE);
		}
		printf("Now we're in %u process\n The child is %u process\n", getpid());
		if ((child = (fork())) == 0)
		{
			lim[0] = line, lim[1] = NULL;
			exe = execve(line, lim, NULL);
			printf("Execeve is supposed to execeute in this child process %u\n", getpid());
			if (exe == -1)
			{
				fprintf(stderr, "Can't execute %s\n", line);
				kill(child, 1);
			}
		}
		else
		{
			printf("The child has exited\n");
			wait(&status);
		}
	}
	return (0);
}
