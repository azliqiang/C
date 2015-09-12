#include <stdio.h>

int main(int argc, const char *argv[])
{
	char buf1[] = {'a', 'b', 'c', 'd', 'd'};
	char buf2[] = "abcd";
	printf("sizeof(buf) = %lu\n", sizeof(buf1));
	printf("sizeof(buf) = %lu\n", sizeof(buf2));
	return 0;
} 
