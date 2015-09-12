#include <stdio.h>

#define SIZE	100
int main(int argc, const char *argv[])
{
	char buf1[SIZE] = "";
	char buf2[SIZE] = "";
	int i = 0;
	int j = 0;

	gets(buf1);
	gets(buf2);

	//1:找buf1的末尾(i记录了buf1的末尾)
	while (buf1[++i]);
	//2:把buf2中的内容复制到buf1中
	while((buf1[i+j++]=buf2[j]));

	printf("buf1 = %s\n", buf1);
	printf("buf2 = %s\n", buf2);
	return 0;
} 
