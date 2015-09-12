#include <stdio.h>

#define NUM		5
int main(int argc, const char *argv[])
{
	int arr[NUM] = {};
	int i = 0;

	for (i=0; i<NUM; i++){//循环输入
		scanf("%d", arr+i);
	}

	for (i=NUM-1; i>=0; i--){//循环输出
		printf("%d\n", arr[i]);
	}
	return 0;
} 
