#include <stdio.h>

#define NUM		5
int main(int argc, const char *argv[])
{
	int arr[NUM] = {};
	int i = 0;

	for (i=0; i<NUM; i++){
		arr[i] = i;
	}
	for (i=0; i<NUM; i++){
		printf("%d ", arr[i]);
	}
	printf("\n");
	return 0;
} 
