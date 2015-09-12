#include <stdio.h>
#include <string.h>

#define SIZE	100
int main(int argc, const char *argv[])
{
	char buf1[SIZE] = "";
	char buf2[SIZE] = "";
	gets(buf1);
	gets(buf2);

	printf("%s\n", strstr(buf1, buf2));
	return 0;
} 
