#include <stdio.h>

int main(int argc, const char *argv[])
{
	int a = 0;
	char ch = 0;

	int *pa = &a;
	char *pCh = &ch;

	printf("sizeof(pa) = %lu\n", sizeof(pa));
	printf("sizeof(pCh) = %lu\n", sizeof(pCh));
	return 0;
} 
