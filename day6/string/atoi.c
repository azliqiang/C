#include <stdio.h>
#include <stdlib.h>

#define SIZE	100
int main(int argc, const char *argv[])
{
	char buf1[SIZE] = "1234";
	char buf2[SIZE] = "-1234";
	printf("atoi(buf1)+ atoi(buf2) = %d\n", atoi(buf1)+atoi(buf2));
	return 0;
} 
