#include <stdio.h>

int main(int argc, const char *argv[])
{
	int a = 0;
	int b = 0;

	scanf("%d", &a);
	scanf("%d", &b);

	if (a > b){
		printf("a - b = %d\n", a - b);
	} else {
		printf("b - a = %d\n", b - a);
	}
	return 0;
} 
