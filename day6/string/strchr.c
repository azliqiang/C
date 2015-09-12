#include <stdio.h>
#include <string.h>

#define SIZE	100
int main(int argc, const char *argv[])
{
	char buf[SIZE] = "";
	char ch = 0;
	gets(buf);
	ch = getchar();

	printf("%s\n", strchr(buf, ch));
	return 0;
} 
