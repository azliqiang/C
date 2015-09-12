#include <stdio.h>

int main(int argc, const char *argv[])
{
	int a = 0;
	
	scanf("%d", &a);

	if (a > 0){
		printf("a = %d\n", a);
	} else {
		printf("a = %d\n", -a);
	}
	return 0;
} 
