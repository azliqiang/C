#include <stdio.h>

int main(int argc, const char *argv[])
{
	int a = 0;
	int b = 0;
	int c = 0;

	scanf("%d", &a);
	scanf("%d", &b);
	scanf("%d", &c);

	if ((a>b) && (a>c)){
		printf("a = %d\n", a);		
	} else if ((b>a) && (b>c)){
		printf("b = %d\n", b);		
	} else {
		printf("c = %d\n", c);		
	}
	return 0;
} 
