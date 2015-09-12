#include <stdio.h>

int add(int a, int b);//函数的声明
int main(int argc, const char *argv[])
{
	int c = 3;
	int d = 5;
	printf("add(c, d) = %d\n", add(c, d));//函数调用
	return 0;
}

int add(int a, int b)//函数的定义
{
	return (a+b);
}
