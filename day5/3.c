#include <stdio.h>

#define NUM		5
int main(int argc, const char *argv[])
{
	int arr[NUM] = {};
	int i = 0;
	for (i=0; i<NUM; i++){//循环输出每个成员的地址
		printf("&arr[%d] = %p\n", i, &arr[i]);
	}
	return 0;
} 
