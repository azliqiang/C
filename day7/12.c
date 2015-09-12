#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define NUM		10
int main(int argc, const char *argv[])
{
	int arr[NUM] = {};
	int *pArr = arr;
	int i = 0;
	int max = 0;

	srand(time(NULL));
	for (; pArr<(arr+NUM); pArr++){//输入
		*pArr = rand()%100;
		printf("%d ", *pArr);
	}
	printf("\n");
	
	for (pArr=arr, max=*arr; pArr<arr+NUM; pArr++){
		if (max < *pArr){
			max = *pArr;
		}
	}
	printf("max = %d\n", max);
	return 0;
} 
