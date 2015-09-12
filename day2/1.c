#include <stdio.h>

int main(int argc, const char *argv[])
{
	//整型
	char a;
	short b;
	int c;
	long d;
	//浮点型
	float e;
	double f;
	
	//计算变量的大小
	printf("a = %lu\n", sizeof(a));
	printf("char = %lu\n", sizeof(char));
	printf("b = %lu\n", sizeof(b));
	printf("short = %lu\n", sizeof(short));
	printf("c = %lu\n", sizeof(c));
	printf("int = %lu\n", sizeof(int));
	printf("d = %lu\n", sizeof(d));
	printf("long = %lu\n", sizeof(long));
	printf("e = %lu\n", sizeof(e));
	printf("float = %lu\n", sizeof(float));
	printf("f = %lu\n", sizeof(f));
	printf("double = %lu\n", sizeof(double));
	return 0;
} 
