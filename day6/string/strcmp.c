#include <stdio.h>
#include <string.h>

#define SIZE	100
int main(int argc, const char *argv[])
{
	char buf1[SIZE] = "";
	char buf2[SIZE] = "";
	int re = 0;
	gets(buf1);
	gets(buf2);

	re = strcmp(buf1, buf2);
	if (re > 0){
		printf("buf1 > buf2\n");
	} else if (re == 0){
		printf("buf1 = buf2\n");
	} else {
		printf("buf1 < buf2\n");
	}
	return 0;
} 
