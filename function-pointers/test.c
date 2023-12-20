#include <stdio.h>

int sum(int, int); 
int sub(int, int);
int mul(int,int);//this is the function prototype. it should be declared in .h file, but can also be declared here outside of main function
int main(void)
{
	int (*add)(int, int) = mul;//initialize pointer *add to mul function/sub function/sum functionsource ~/.vimrc.
	int result;
	result = add(5, 2);
	printf("%d\n", result);//how to declare a funcion pointer: 1.pass return data type of function you are passing to (int).2.give your function pointer a name(*add).3.pass data type of parameters/arguments(int, int)
}

int sum(int a, int b)
{
	return a+b;
}

int sub(int a, int b)
{
	return a-b;
}

int mul(int a, int b)
{
	return a*b;
}
