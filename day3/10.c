#include <stdio.h>

int main(int argc, const char *argv[])
{
	int a = 0;
	int b = 0;
	int c = 0;
	int tmp = 0;

	scanf("%d", &a);
	scanf("%d", &b);
	scanf("%d", &c);

	if (a > b){
		tmp = a;
		a = b;
		b = tmp;
	}
	if (a > c){
		tmp = a;
		a = c;
		c = tmp;
	}
	if (b > c){
		tmp = b;
		b = c;
		c = tmp;
	}

	printf("a = %d\n", a);
	printf("b = %d\n", b);
	printf("c = %d\n", c);
	return 0;
} 
