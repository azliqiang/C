#include <stdio.h>

int c = 0;//全局变量，具有文件作用域
void add(int a, int b)//a,b函数行参，具有函数作用域
{
	return a+b;
}

int d = 0;
int main(int argc, const char *argv[])
{
	int e = 0;//局部变量，具有块作用域
	return 0;
} 
