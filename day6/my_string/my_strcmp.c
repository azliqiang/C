#include <stdio.h>

#define SIZE	100
int main(int argc, const char *argv[])
{
	char buf1[SIZE] = "";
	char buf2[SIZE] = "";
	int i = 0;

	gets(buf1);
	gets(buf2);

	for (; (buf1[i]!=0)&&(buf2[i]!=0)&&(buf1[i]==buf2[i]); i++);//同时便利buf1和buf2

	printf("buf[%d]-buf2[%d] = %d\n", i, i, buf1[i]-buf2[i]);
	return 0;
} 
