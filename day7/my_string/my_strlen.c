#include <stdio.h>

#define SIZE		100
int main(int argc, const char *argv[])
{
	char buf[SIZE] = "";
	int i = 0;

	gets(buf);
	for (i=0; *(buf+i); i++);

	printf("i = %d\n", i);
	return 0;
} 
