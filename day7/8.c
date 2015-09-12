#include <stdio.h>

#define NUM		5
int main(int argc, const char *argv[])
{
	int arr[NUM] = {};
	int *p = &arr[0];
	int *q = &arr[4];
	printf("q - p = %ld\n", q-p);
	return 0;
} 
