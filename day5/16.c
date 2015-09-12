#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define NUM		10
int main(int argc, const char *argv[])
{
	int arr[NUM] = {};
	int brr[NUM] = {};
	int i = 0;
	int tmp = 0;

	srand(time(NULL));
	for (i=0; i<NUM; i++){//输入arr
		arr[i] = rand()%100;
		printf("%d ", arr[i]);
	}
	printf("\n");
	for (i=0; i<NUM; i++){//输入brr
		brr[i] = rand()%100;
		printf("%d ", brr[i]);
	}
	printf("\n");

	for (i=0; i<NUM; i++){
		tmp = arr[i];
		arr[i] = brr[i];
		brr[i] = tmp;
	}

	for (i=0; i<NUM; i++){//输出arr
		printf("%d ", arr[i]);
	}
	printf("\n");
	for (i=0; i<NUM; i++){//输出brr
		printf("%d ", brr[i]);
	}
	printf("\n");
	return 0;
} 
