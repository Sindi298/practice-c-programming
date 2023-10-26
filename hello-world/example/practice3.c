#include<stdio.h>

/**
  *main - prints out a string using puts
  *Return: Always 0 (success)
  */

int main(void)
{
	char name[100];

	printf("enter a name\n");
	fgets(name, 100, stdin);

	printf("your name is : %s\n", name);
	puts("view name below\n");
	puts(name);

	return (0);
}

