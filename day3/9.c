#include <stdio.h>

int main(int argc, const char *argv[])
{
	int a = 0;
	int b = 0;
	int tmp = 0;

	scanf("%d", &a);
	scanf("%d", &b);

	if (a > b){
		tmp = a;
		a = b;
		b = tmp;
	}
	printf("a = %d\n", a);
	printf("b = %d\n", b);
	return 0;
} 
