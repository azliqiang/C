#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define NUM		10
int main(int argc, const char *argv[])
{
	int arr[NUM] = {};
	int i = 0;
	int tmp = 0;

	srand(time(NULL));
	for (i=0; i<NUM; i++){//循环输入
		arr[i] = rand()%100;
		printf("%d ", arr[i]);
	}
	printf("\n");

	for (i=0; i<NUM; i=i+2){//交换
		tmp = arr[i];
		arr[i] = arr[i+1];
		arr[i+1] = tmp;
	}

	for (i=0; i<NUM; i++){//循环输出
		printf("%d ", arr[i]);
	}
	printf("\n");
	return 0;
} 
