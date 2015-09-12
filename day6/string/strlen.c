#include <stdio.h>
#include <string.h>

#define SIZE	100
int main(int argc, const char *argv[])
{
	char buf[SIZE] = "";
	gets(buf);
	printf("strlen(buf) = %lu\n", strlen(buf));
	return 0;
} 
