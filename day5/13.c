#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define NUM		10
int main(int argc, const char *argv[])
{
	int arr[NUM] = {};
	int sum = 0;
	int i = 0;
	int max = 0;
	int min = 0;

	srand(time(NULL));
	for (i=0; i<NUM; i++){
		arr[i] = rand()%101;
		sum = sum + arr[i];//求总分
		printf("%d ", arr[i]);
	}
	printf("\n");

	for (max=arr[0],min=arr[0],i=0; i<NUM; i++){
		if (max < arr[i]){
			max = arr[i];
		}
		if (min > arr[i]){
			min = arr[i];
		}
	}
	printf("平均分 = %d\n", (sum-max-min)/(NUM-2));
	return 0;
} 
