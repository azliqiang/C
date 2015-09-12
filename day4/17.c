#include <stdio.h>

int main(int argc, const char *argv[])
{
	int n1 = 1;
	int n2 = 1;
	int n3 = 0;
	int sum = 2;
	int i = 0;
	printf("1\n");
	printf("1\n");
	for (i=0; i<18; i++){
		n3 = n2 + n1;
		printf("n3 = %d\n", n3);
		sum = sum + n3;
		n1 = n2;//n1前移
		n2 = n3;//n2前移
	}
	printf("sum = %d\n", sum);
	return 0;
} 
