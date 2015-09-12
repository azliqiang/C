#include <stdio.h>

#define SIZE		100
int main(int argc, const char *argv[])
{
	char buf1[SIZE] = "";
	char buf2[SIZE] = "";
	int i = 0;
	int j = 0;

	gets(buf1);
	gets(buf2);

	for (i=0; *(buf1+i); i++);
	for (j=0; *(buf2+j); j++){
		*(buf1+i+j) = *(buf2+j);
	}

	printf("buf1 = %s\n", buf1);
	printf("buf2 = %s\n", buf2);
	return 0;
} 
