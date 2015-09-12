#include <stdio.h>

int main(int argc, const char *argv[])
{
	//变量的定义
	int a = 0;
	int b = 0;
	
	//输入
	scanf("%d", &a);
	scanf("%d", &b);

	if (a > b){
		printf("a = %d\n", a);
	}

	if (b > a){
		printf("b = %d\n", b);
	}
	return 0;
} 
