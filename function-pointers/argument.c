#include <stdio.h>

int main (int argc, char *argv[])
{
	printf("argc = %d\n\n", argc);
	printf("Everything inside of argv[]\n");

	int i;

	for (i = 0; i < argc; i++)
	{
		printf("argv[%d] = %s\n", i, argv[i]);
	}
	return (0);
}
