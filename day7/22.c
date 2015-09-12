#include <stdio.h>

int main(int argc, const char **argv)
{
	int a = 3;
	int *p = &a;
	int **pp = &p;
	int ***ppp = &pp;

	printf("&a = %p\n", &a);
	printf("p = %p\n", p);
	printf("*pp = %p\n", *pp);
	printf("**ppp = %p\n", **ppp);

	printf("a = %d\n", a);
	printf("*p = %d\n", *p);
	printf("**pp = %d\n", **pp);
	printf("***ppp = %d\n", ***ppp);
	return 0;
} 
