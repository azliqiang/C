#include <stdio.h>

#define NUM		5
int main(int argc, const char *argv[])
{
#if 0
	//完全初始化
	int arr[NUM] = {1, 2, 3, 4, 5};
	int i = 0;
	for (i=0; i<NUM; i++){
		printf("arr[%d] = %d\n", i, arr[i]);
	}
#endif
#if 0
	//部分初始化
	int arr[NUM] = {1, 2};
	int i = 0;
	for (i=0; i<NUM; i++){
		printf("arr[%d] = %d\n", i, arr[i]);
	}
#endif
#if 0
	//没有指定初始化值
	int arr[NUM] = {};
	int i = 0;
	for (i=0; i<NUM; i++){
		printf("arr[%d] = %d\n", i, arr[i]);
	}
#endif
#if 0
	//没有指定成员个数
	int arr[] = {1, 2, 3, 4, 5};
	printf("sizeof(arr) = %lu\n", sizeof(arr));
	int i = 0;
	for (i=0; i<NUM; i++){
		printf("arr[%d] = %d\n", i, arr[i]);
	}
#endif
	//未初始化
	int arr[NUM];
	int i = 0;
	for (i=0; i<NUM; i++){
		printf("arr[%d] = %d\n", i, arr[i]);
	}
	return 0;
} 
