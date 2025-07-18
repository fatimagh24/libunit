#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

static int	redirection(int pipe_fds[2], char mode)
{
	if (mode == 'r')
	{
		close(pipe_fds[0]);
		if (dup2(pipe_fds[1], 1) == -1)
		{
			close(pipe_fds[1]);
			return (-1);
		}
		close(pipe_fds[1]);
	}
	else if (mode == 'w')
	{
		close(pipe_fds[1]);
		if (dup2(pipe_fds[0], 0) == -1)
		{
			close(pipe_fds[0]);
			return (-1);
		}
		close(pipe_fds[0]);
	}
	return (0);
}

int	ft_popen(char **argv, char mode)
{
	int	pid;
	int	pipe_fds[2];


	if (mode != 'w' && mode != 'r')
		return (-1);
	if (pipe(pipe_fds) == -1)
		return (-1);
	pid = fork();
	if (pid < 0)
	{
		close(pipe_fds[0]);
		close(pipe_fds[1]);
		return (-1);
	}
	else if (pid == 0)
	{
		if (redirection(pipe_fds, mode) != 0)
			exit(1);
		execvp(argv[0], argv);
		exit(1);
	}
	if (mode == 'r')
	{
		close(pipe_fds[1]);
		return (pipe_fds[0]);
	}
	else if (mode == 'w')
	{
		close(pipe_fds[0]);
		return (pipe_fds[1]);
	}
	return (-1);
}
