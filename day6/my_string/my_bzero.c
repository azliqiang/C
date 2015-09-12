#include <stdio.h>

#define SIZE	100
int main(int argc, const char *argv[])
{
	char buf[SIZE] = "";
	int i = 0;
	gets(buf);

	for (i=0; buf[i]!=0; i++){
		buf[i] = 0;
	}
	printf("buf = %s\n", buf);
	return 0;
} 
