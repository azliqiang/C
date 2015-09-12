#include <stdio.h>

#define NUM		5
int main(int argc, const char *argv[])
{
	int arr[NUM] = {};
	int (*p) = &arr[0];
	
	int i = 0;
	for (i=0; i<NUM; i++){
		printf("&arr[%d] = %p\n", i, &arr[i]);
		printf("p+%d = %p\n", i, p+i);
	}
	return 0;
} 
