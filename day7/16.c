#include <stdio.h>

#define SIZE	100
int main(int argc, const char *argv[])
{
#if 0
	char buf[SIZE] = "abcd";
	buf[0] = 'h';
	printf("%s\n", buf);

	//buf--->字符串的首地址
	//p---->字符串的首地址
	char *p = "abcd";
	*p = 'h';//"abcd"是字符串常量，不能被修改
	printf("%s\n", p);
#endif

	char buf[SIZE] = "abcd";
	char *p = NULL;
	p = buf;
	buf[0] = 'h';
	p[1] = 'S';
	printf("%s\n", buf);
	printf("%s\n", p);
	
	return 0;
} 
