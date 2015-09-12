#include <stdio.h>
#include <string.h>

#define SIZE	100
int main(int argc, const char *argv[])
{
	char buf[SIZE] = "";
	gets(buf);
//	bzero(buf, sizeof(buf));
	bzero(buf, strlen(buf));
	printf("buf = %s\n", buf);
	return 0;
} 
