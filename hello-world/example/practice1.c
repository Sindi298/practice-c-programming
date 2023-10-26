#include<stdio.h>

/**
  *main - Prints hello world
  *return: Always 0 (success)
  */

int main(void)
{
	int x;

	printf("enter a value\n");
	x = getchar();

	printf("you have entered a value\n");
	putchar(x);

	return (0);
}
