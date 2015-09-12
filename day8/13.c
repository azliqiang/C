#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define NUM		10
//int delete(int *pArr, int nArr, int n);//函数的定义
//void delete(int *pArr, int nArr, int n, int t)//函数的定义
void delete(int *pArr, int nArr, int n, int *pt);//函数的定义
void input(int *pArr, int n);
void output(int *pArr, int n);
int main(int argc, const char *argv[])
{
	int arr[NUM] = {};
	int n = 0;
	int t = 0;

	input(arr, NUM);//函数调用
	output(arr, NUM);
	scanf("%d", &n);
	printf("t = %d\n", t);
	delete(arr, NUM, n, &t);
	printf("t = %d\n", t);
	output(arr, NUM-t);
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

void delete(int *pArr, int nArr, int n, int *pt)//函数的定义
{
	int i = 0;
	int j = 0;
	int t = 0;
	for (i=0; i<(nArr-t); i++){//遍历数组
		if (*(pArr+i) == n){//找到删除的数
			for (j=i; j<(nArr-1-t); j++){//循环前移
				*(pArr+j) = *(pArr+j+1);
			}
			t++;//计数
			i--;//相邻
		}
	}
	*pt = t;
}
