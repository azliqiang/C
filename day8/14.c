#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define NUM		10
void maopao(int *pArr, int n);//函数的声明
void input(int *pArr, int n);
void output(int *pArr, int n);
int main(int argc, const char *argv[])
{
	int arr[NUM] = {};

	input(arr, NUM);//函数调用
	output(arr, NUM);
	maopao(arr, NUM);
	output(arr, NUM);
	return 0;
}

void input(int *pArr, int n)
{
	int *pArrCp = pArr;
	srand(time(NULL));
	for (; pArrCp<(pArr+n); pArrCp++){
		*pArrCp = rand()%100;
	}
}

void output(int *pArr, int n)
{
	int *pArrCp = pArr;
	for (; pArrCp<(pArr+n); pArrCp++){
		printf("%d ", *pArrCp);
	}
	printf("\n");
}

void maopao(int *pArr, int n)//函数的定义
{
	int i = 0;
	int tmp = 0;
	int j = 0;
	for (j=0; j<n; j++){//冒泡执行的次数
	for (i=0; i<n-1; i++){//冒泡
		if (*(pArr+i) > *(pArr+i+1)){//相邻成员比较
			tmp = *(pArr+i);//交换
			*(pArr+i) = *(pArr+i+1);
			*(pArr+i+1) = tmp;
		}
	}
	}
}
