#include <stdio.h>

int sum(int, int);
int sub(int, int);
int mul(int, int);
int output(int (*pt)(int, int));
int main(void)
{
	int i;

	i = output(sum);
	printf("%d\n", i);
}

int sum(int a, int b)
{
	return a + b;
}

int sub(int a, int b)
{
	return a - b;
}

int mul(int a, int b)
{
	return a * b;
}

int output(int (*pt)(int, int))//this function pointer will point to a function, either sum/sub/mul and is taking a function as its para    meter/argument  
{
	pt(4,5);
}	
