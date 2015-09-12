#include <stdio.h>

#define SIZE	100
char *my_strcat(char buf1[], char buf2[]);//声明
int main(int argc, const char *argv[])
{
	char buf1[SIZE] = "";
	char buf2[SIZE] = "";

	gets(buf1);
	gets(buf2);

	printf("%s\n", my_strcat(buf1, buf2));//函数调用
	return 0;
}

char *my_strcat(char buf1[], char buf2[])//实现
{
	int i = 0;
	int j = 0;
	for (i=0; buf1[i]; i++);
	for (j=0; buf2[j]; j++){
		buf1[i+j] = buf2[j];
	}
	return buf1;
}
