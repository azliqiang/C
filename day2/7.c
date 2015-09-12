#include <stdio.h>
int main(int argc, char *argv[])
{
	int a = 1;
	int b = 1;
	int aplus;
	int bplus;

	aplus = a++;
	bplus = ++b;
	printf("a = %d\n", a);//2
	printf("b = %d\n", b);//2
	printf("aplus = %d\n", aplus);//1
	printf("bplus = %d\n", bplus);//2
	return 0;
}
