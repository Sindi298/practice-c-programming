#include <stdio.h>

void main()
{
	int a = 10;
	int *p = &a;
	int **q = &p;
	int ***r = &q;

	printf("a = %d\n", a);
	printf("a = %d\n", *p);
	printf("a = %d", *(*q));
	printf("a = %d\n", *(*(*r)));
	printf("address of q =%x\n %x\n", r, &q);
	printf("address of p = %x\n %x\n", &p, q);
}