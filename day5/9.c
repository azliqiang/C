#include <stdio.h>

#define NUM		10
int main(int argc, const char *argv[])
{
	int arr[NUM] = {};
	int i = 0;

	for (i=0; i<NUM; i++){//成员值等于下标两倍
		arr[i] = i * 2;
	}

	for (i=NUM-1; i>=0; i--){//逆序输出
		printf("%d ", arr[i]);
	}
	printf("\n");

	return 0;
} 
