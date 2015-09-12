#include <stdio.h>

#define NUM		5
#define SIZE	10
int main(int argc, const char *argv[])
{
	int arr[NUM] = {};
	char buf[SIZE] = "";
	printf("sizeof(arr) = %lu\n", sizeof(arr));
	printf("sizeof(int [5]) = %lu\n", sizeof(int [5]));
	printf("sizeof(buf) = %lu\n", sizeof(buf));
	return 0;
} 
