#include <stdio.h>
#include <string.h>

#define SIZE	100
int main(int argc, const char *argv[])
{
	char buf[SIZE] = "";
	char *p = NULL;
	int t = 0;
	gets(buf);

	for (p=buf; (p=strchr(p, ' ')); t++, p++);

	printf("t = %d\n", t+1);
	return 0;
} 
