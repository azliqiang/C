#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define NUM		10
int main(int argc, const char *argv[])
{
	int arr[NUM] = {};
	int i = 0;
	int max = 0;
	int max_i = 0;

	srand(time(NULL));
	for (i=0; i<NUM; i++){//循环输入
		arr[i] = rand()%100;
		printf("%d ", arr[i]);
	}
	printf("\n");

	for (max=arr[0], max_i=0, i=0; i<NUM; i++){
		if (max < arr[i]){
			max = arr[i];
			max_i = i;
		}
	}
	printf("max = %d\n", max);
	printf("max_i = %d\n", max_i);
	return 0;
} 
