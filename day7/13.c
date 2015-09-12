#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define NUM		10
int main(int argc, const char *argv[])
{
	int arr[NUM] = {};
	int i = 0;
	int tmp = 0;
	int j = 0;

	srand(time(NULL));
	for (i=0; i<NUM; i++){//输入
		*(arr+i) = rand()%100;
		printf("%d ", *(arr+i));
	}
	printf("\n");

	for (j=0; j<NUM; j++){//冒泡执行的次数
		for (i=0; i<NUM-1; i++){//相邻成员比较
			if (*(arr+i) > *(arr+i+1)){//交换
				tmp = *(arr+i);
				*(arr+i) = *(arr+i+1);
				*(arr+i+1) = tmp;
			}
		}
	}

	for (i=0; i<NUM; i++){//输入
		printf("%d ", *(arr+i));
	}
	printf("\n");
	return 0;
} 

