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
	for (i=0; i<NUM; i++){//输入
		*(arr+i) = rand()%100;
		printf("%d ", *(arr+i));
	}
	printf("\n");

	for (i=0; i<(NUM/2); i++){//逆序
		tmp = *(arr+i);//交换
		*(arr+i) = *(arr+NUM-1-i);
		*(arr+NUM-1-i) = tmp;
	}

	for (i=0; i<NUM; i++){//输入
		printf("%d ", *(arr+i));
	}
	printf("\n");
	return 0;
} 

