#include <stdio.h>

#define SIZE	100
int main(int argc, const char *argv[])
{
	char buf[SIZE] = "";
	int i = 0;
	int num = 0;
	gets(buf);

	for (; buf[i]; num = num*10 + buf[i++]-'0');

	printf("num = %d\n", num);
	return 0;
} 
