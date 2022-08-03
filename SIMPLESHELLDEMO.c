#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/wait.h>
#include <sys/types.h>


void read_cmd(void);
void tokenizer(char *buf, char *buf_cpy);
void exec_cmd(char **argv);

/**
 * main - A function to create a simple shell
 *
 * @argv: Argument vector
 * @argc: Argument count
 *
 * Return: Return zero
 */

int main(int argc, char **argv)
{
	read_cmd();
	return (0);
}


/**
 * read_cmd - Function to read from command line
 *
 * Return: return zero on success
 */

void read_cmd(void)
{
	size_t buf_size;
	ssize_t nread;
	char *buf = NULL;
	char *buf_cpy = NULL;

	printf("input command: ");
	nread = getline(&buf, &buf_size, stdin);
	if (nread == -1)
	{
		printf("\n.....logging out\n");
		return;
	}
	buf_cpy = malloc(sizeof(char) * nread);
	strcpy(buf_cpy, buf);
	tokenizer(buf, buf_cpy);
	free(buf);
	free(buf_cpy);
}

/**
 *tokenizer - Function to parse strings
 *
 * @buf: Buffer
 * @buf_cpy: A copy of buffer
 *
 * return : Return token
 */

void tokenizer(char *buf, char *buf_cpy)
{
	char *token;

	char delim[] = " \n";
	char **argv = NULL;
	int num_tok = 0, i;

	token = strtok(buf, delim);
	while (token)
	{
		num_tok++;
		token = strtok(NULL, delim);
	}
	++num_tok;
	argv = malloc(sizeof(char *) * num_tok);
	token = strtok(buf_cpy, delim);
	for (i = 0; token; i++)
	{
		argv[i] = malloc(sizeof(char) * strlen(token));
		strcpy(argv[i], token);
		token = strtok(NULL, delim);
		if (token == NULL)
			argv[++i] = NULL;
	}
	exec_cmd(argv);
	free(argv);
	free(token);
}

/**
 * exec_cmd - Funciton to execute commands
 *
 * @argv: Argument vector
 *
 * return: Return zero on success
 */

void exec_cmd(char **argv)
{
	pid_t pid;

	pid = fork();
	if (pid != 0)
	{
		wait(NULL);
		read_cmd();
	}
	else
	{
		if (execve(argv[0], argv, NULL) == -1)
			perror("Input new command");
	}
}
