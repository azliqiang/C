#include <stdio.h>

#define NUM		10
int main(int argc, const char *argv[])
{
	int arr[NUM] = {};
	int sum = 0;
	int i = 0;

	for (i=0; i<NUM; i++){//循环输入
		scanf("%d", &arr[i]);
	}

	for (i=0; i<NUM; i++){
		sum = sum + arr[i];
	}
	printf("sum = %d\n", sum);
	return 0;
} 
