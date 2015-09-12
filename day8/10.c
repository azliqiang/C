#include <stdio.h>

#define SIZE		100
int total(char buf[]);//函数声明
int main(int argc, const char *argv[])
{
	char buf[SIZE] = "";
	gets(buf);

	printf("total(buf) = %d\n", total(buf));//函数调用
	return 0;
}

int total(char buf[])//函数定义
{
	int i = 0;
	int t = 0;
	for (i=0; buf[i]; i++){
		if ((buf[i]>='0') && (buf[i]<='9')){
			t++;
		}
	}
	return t;
}
