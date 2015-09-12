#include <stdio.h>
#include <string.h>

#define SIZE		100
int main(int argc, const char *argv[])
{
	char buf[SIZE] = "abcd\0abcedg\0djhkf";
	printf("sizeof(buf) = %lu\n", sizeof(buf));
	printf("strlen(buf+13) = %lu\n", strlen(buf+13));
	printf("buf = %s\n", buf+13);
	return 0;
} 
