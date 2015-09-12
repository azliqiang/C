#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define NUM		10
void maopao(int *pArr, int n);//函数的声明
void input(int *pArr, int n);
void output(int *pArr, int n);
void insert(int *pArr, int nArr, int n);
int main(int argc, const char *argv[])
{
	int arr[NUM+1] = {};
	int n = 0;

	input(arr, NUM);//函数调用
	output(arr, NUM);
	maopao(arr, NUM);
	output(arr, NUM);
	scanf("%d", &n);
	insert(arr, NUM, n);
	output(arr, NUM+1);
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

void insert(int *pArr, int nArr, int n)
{
	int i = 0;
	int j = 0;
	for (i=0, *(pArr+nArr)=n; i<nArr; i++){//遍历数组
		if (*(pArr+i) > n){//找到插入的位置
			for (j=nArr-1; j>=i; j--){//循环后移
				*(pArr+j+1) = *(pArr+j);
			}
			*(pArr+i) = n;//插入
			break;
		}
	}
}
