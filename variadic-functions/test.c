#include <stdio.h>
#include <stdarg.h>

//function prototype
int add(int arg, ...);

//main function
int main()
{
	printf("Addition 1 = %d\n", add(7, 1, 2, 3, 4, 5, 6, 7));
	printf("Addition 2 = %d\n", add(4, 1, 2, 3, 4));
	printf("Addition 3 = %d\n", add(2, 1, 2));

	return (0);
}

//add function which is a variadic function
int add(int args, ...)
{
	va_list list;//define a macro called list

	if (args ==0)
		return(0);

	va_start(list, args);//takes 2 arguments 1. (list) variable defined above 2. count of arguments variable (args).signifies beginning of list.
	//all actions take place here
	int i, sum = 0;//because our function is going to be doing an addition, we want to add some series of arguments, by using a for loop. To use for loop we have to 1.declare the 1st integer datatype, 2.the variable (i) & because we are adding all the viariables 3.we declare (sum)

	for (i = 0; i < args; i++)
	{
		sum += va_arg(list, int);//everytime i interates we want to continue adding (sum) and assign the value that we get back to sum. we use va_arg macro  to take in the va-list and the datatype of all arguments we will have.
	}

	va_end(list);//takes 1 argument (list).signifies end of list

	return (sum);
}
