#include <stdio.h>
#include <string.h>

int main (void)
{
	char s[] = "my name is sindi";

	char *token;
	char *d = " ";

	token = strtok(s, d);

	while (token != NULL)
	{
		printf("Token: %s\n", token);
		token = strtok(NULL, d);
	}

	return (0);
}
