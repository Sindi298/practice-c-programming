#include<stdio.h>

/**
  *main - Prints hello function
  *Return: Always 0 (success)
  */

int main(void)
{
	char name[100];

	printf("enter a name\n");
	scanf("%s", name);

	printf("your name is :%s", name);

	return (0);
}
