#include<stdio.h>

/*
 *main - Prints sum of numbers
 *Return: return 0
*/

int main(void)
{
	int a, b, sum;

	printf("enter two number: ");

	scanf("%d %d", &a, &b);

	sum = a + b;

	printf("a = %d, b = %d, sum = %d", a, b, sum);

	return (0);
}
