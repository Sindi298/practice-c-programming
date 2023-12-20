#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stddef.h>
#include <unistd.h>

int main()
{
	char *buf = NULL;
	size_t size = 0;
	ssize_t getRV;
	char *temp;

	getRV = getline(&buf, &size, stdin);

	if (getRV == -1)
	{
		free(buf);
		exit(0);
	}
	printf("Before tokenization:\n");
	printf("you entered %s", buf);

	printf("After tokenization:\n");

	temp = strtok(buf, "\n");
	printf("you entered %s", temp);
	printf("buffer size is : %ld", size);
	
	free(buf);
	return (0);
}

