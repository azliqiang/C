#include <stdio.h>
#include <stdlib.h>

int b = 0;//已经初始化的全局变量
static int c = 0;//已经初始化的static修饰的变量

int e;//未始化的全局变量
static int f;//未初始化的static修饰的变量
int main(int argc, const char *argv[])
{
	//只读存储区
	char *a = "abcd";
	static int d = 0;//已经初始化的static修饰的变量
	static int g;//未初始化的static修饰的变量

	char *h = malloc(10);//堆
	int i = 0;//局部变量,栈

	printf("只读存储区 = %p\n", a);

	printf("已经初始化的全局变量 = %p\n", &b);
	printf("已经初始化的static修饰的变量 = %p\n", &c);
	printf("已经初始化的static修饰的变量 = %p\n", &d);

	printf("未初始化的全局变量 = %p\n", &e);
	printf("未初始化的static修饰的变量 = %p\n", &f);
	printf("未初始化的static修饰的变量 = %p\n", &g);

	printf("堆 = %p\n", h);

	printf("栈 = %p\n", &i);
	return 0;
} 
