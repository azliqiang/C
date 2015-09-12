#include <stdio.h>

#define NUM		20
int main(int argc, const char *argv[])
{
	int arr[NUM] = {1, 1};
	int i = 0;
	int sum = 2;

	for (i=2; i<20; i++){
		arr[i] = arr[i-1] + arr[i-2];
		sum = sum + arr[i];
		printf("arr[%d] = %d\n",i, arr[i]);
	}
	printf("sum = %d\n", sum);
	return 0;
} 
