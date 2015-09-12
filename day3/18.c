#include <stdio.h>

int main(int argc, const char *argv[])
{
	int a = 0;
	int b = 0;
	scanf("%d", &a);
	scanf("%d", &b);

	if (a > b){
		printf("a > b\n");
	} else if (a == b){
		printf("a == b\n");
	} else {
		printf("a < b\n");
	}
	return 0;
} 
