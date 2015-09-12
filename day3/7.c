#include <stdio.h>

int main(int argc, const char *argv[])
{
	//变量的定义
	int a = 0;
	int b = 0;
	int c = 0;
	
	//输入
	scanf("%d", &a);
	scanf("%d", &b);
	scanf("%d", &c);

	if ((a > b) && (a > c)){
		printf("a = %d\n", a);
	}
	if ((b > a) && (b > c)){
		printf("b = %d\n", b);
	}
	if ((c > b) && (c > a)){
		printf("c = %d\n", c);
	}

	return 0;
} 
