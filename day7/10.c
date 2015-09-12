#include <stdio.h>

int main(int argc, const char *argv[])
{
	int a = 3;
	int b = 5;
	int *pa = &a;
	int *pb = &b;
	int *pTmp = NULL;
	int tmp = 0;

	printf("a = %d\n", a);
	printf("b = %d\n", b);

#if 0
	tmp = a;
	a = b;
	b = tmp;
#endif
#if 0
	tmp = *pa;
	*pa = *pb;
	*pb = tmp;
#endif
	pTmp = pa;
	pa = pb;
	pb = pTmp;

	printf("*pa = %d\n", *pa);
	printf("*pb = %d\n", *pb);
//	printf("a = %d\n", a);
//	printf("b = %d\n", b);
	return 0;
} 
