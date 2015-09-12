#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define NUM		10
int main(int argc, const char *argv[])
{
	int arr[NUM] = {};
	int *pArr = NULL;
	int *pArrCp = NULL;
	int tmp = 0;

	srand(time(NULL));
	for (pArr=arr; pArr<(arr+NUM); pArr++){//输入
		*pArr = rand()%100;
		printf("%d ", *pArr);
	}
	printf("\n");

	for (pArrCp=arr; pArrCp<(arr+NUM); pArrCp++){
		for (pArr=arr; pArr<(arr+NUM-1); pArr++){//冒泡
			if (*pArr > *(pArr+1)){//交换
				tmp = *pArr;
				*pArr = *(pArr+1);
				*(pArr+1) = tmp;
			}
		}
	}

	for (pArr=arr; pArr<(arr+NUM); pArr++){//输入
		printf("%d ", *pArr);
	}
	printf("\n");
	return 0;
} 

