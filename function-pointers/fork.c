#include <sys/types.h>
#include <unistd.h>
#include <stdio.h>

int main (void)
{
	pid_t forkRV;
	printf("Before calling the fork function\n");

	forkRV = fork();

	if (forkRV == -1)
	{
		perror("Process creation has failed\n");
		return (-1);
	}
	
	if (forkRV == 0)
	{
		printf("I am the child process\n");
		printf("Child process is %u\n", getpid());
		printf("PPID of the child is %u\n", getppid());
	}

	else
	{
		printf("After calling fork function\n");
		printf("I am the parent\n");
		printf("My PID is %u\n", getpid());
		printf("My child PID is %u\n", forkRV);
	}

	return (0);
}
