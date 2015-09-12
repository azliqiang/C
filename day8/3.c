#include <stdio.h>

int max(int a, int b);//定义

int main(int argc, const char *argv[])
{
	int a = 3;
	int b = 5;
	printf("max(a, b) = %d\n", max(a, b));//函数调用
	return 0;
}

int max(int a, int b)//定义
{
	return (a>b?a:b);
}
