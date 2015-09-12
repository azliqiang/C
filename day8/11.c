#include <stdio.h>

void swap(int *pa, int *pb);//函数声明
int main(int argc, const char *argv[])
{
	int a = 3;
	int b = 5;
	int tmp = 0;
	printf("a = %d\n", a);
	printf("b = %d\n", b);
	swap(&a, &b);//函数调用
	printf("a = %d\n", a);
	printf("b = %d\n", b);
	return 0;
} 
void swap(int *pa, int *pb)//函数定义
{
	int *ptmp = NULL;
	ptmp = pa;
	pa = pb;
	pb = ptmp;
	printf("*pa = %d\n", *pa);
	printf("*pb = %d\n", *pb);
}
