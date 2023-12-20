#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int main()
{
	int number = 17;

	pid_t process_id;

	process_id = getpid();

	printf("%d\n", number);
	printf("The process id os %u", process_id);

	return (0);
}

