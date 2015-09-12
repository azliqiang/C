#include <stdio.h>

int main(int argc, const char *argv[])
{
	int a = 5;

	int *pa = &a;

	printf("&a = %p\n", &a);
	printf("pa = %p\n", pa);

	printf("a = %d\n", a);
	printf("*pa = %d\n", *pa);
	return 0;
} 
