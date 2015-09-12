#include <stdio.h>

#define NUM		10
int main(int argc, const char *argv[])
{
	int arr[NUM] = {};
	printf("arr = %p\n", arr);
	printf("arr[0] = %p\n", &arr[0]);
	printf("arr+1 = %p\n", arr+1);
	printf("arr[1] = %p\n", &arr[1]);
	return 0;
} 
