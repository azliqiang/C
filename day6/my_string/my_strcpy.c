#include <stdio.h>

#define SIZE	100
int main(int argc, const char *argv[])
{
	char buf1[SIZE] = "";
	char buf2[SIZE] = "";
	int i = 0;

	gets(buf2);

	while ((buf1[i++]=buf2[i]));

	printf("buf1 = %s\n", buf1);
	printf("buf2 = %s\n", buf2);
	return 0;
} 
