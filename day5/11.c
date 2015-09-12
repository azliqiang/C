#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

#define NUM		10
int main(int argc, const char *argv[])
{
	int arr[NUM] = {};
	int i = 0;

//	srand(time(NULL));//随机数种子函数
	srand(getpid());//随机数种子函数
	for (i=0; i<NUM; i++){
		arr[i] = rand()%100;//随机数函数
		printf("%d ", arr[i]);
	}
	printf("\n");
	return 0;
} 
