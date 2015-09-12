#include <stdio.h>

int max(int a, int b)
{
	return a>b?a:b;
}

int min(int a, int b)
{
	return a<b?a:b;
}
int main(int argc, const char *argv[])
{
	//max(3, 5);
	int (*p)(int a, int b) = NULL;
	p = max;
	printf("max(3, 5) = %d\n", max(3, 5));
	printf("p(3, 5) = %d\n", p(3, 5));
	p = min;
	printf("p(3, 5) = %d\n", p(3, 5));
	return 0;
} 
