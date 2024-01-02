#include "main.h"
/**
 * main - begin prac execution
 * @argc: argument count
 * @argv: argument vector array
 * Return: 0 on success
 */
int main(void)
{
	int status, i = 0;
	pid_t child[5];
	char *argv[] = {"/bin/ls", "-l", "/tmp/", NULL};

	for (i = 0; i < 5; ++i)
	{
		child[i] = fork();
		printf("Let's see if this is executed in all children or the parentr does");
		if (child[i] == -1)
			printf("error createing new process\n");
		else if (!(child[i]))
		{
			if ((execve(argv[0], argv, NULL) == -1))
				printf("Error executing exec func\n");
		}
		else
		{
			wait(&status);
			printf("Child %d finished executing\n", i);
		}
	}
	printf("All %d children are dne executing\n", i);
	return (0);
}
