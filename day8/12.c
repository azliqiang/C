#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define NUM		10
int average(int *pArr, int n);//函数的声明
void input(int *pArr, int n);
void output(int *pArr, int n);
int main(int argc, const char *argv[])
{
	int arr[NUM] = {};

	input(arr, NUM);//函数调用
	output(arr, NUM);
	printf("average = %d\n", average(arr, NUM));
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

int average(int *pArr, int n)//函数的定义
{
//	int i = 0;
	int sum = 0;
	int *pArrCp = pArr;

//	for (i=0; i<n; i++){
//		sum = sum + *(pArr+i);
//	}

	for (; pArrCp<(pArr+n); sum = sum + *pArrCp++);
	return sum/n;
}
