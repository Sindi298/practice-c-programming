#include <stdio.h>
#include <unistd.h>

int main()
{
	int number = 17;

	pid_t parent_process_id;

	parent_process_id = getppid();

	printf("%d\n", number);
	printf("The parent process id is %u\n", parent_process_id);

	return(0);
}
