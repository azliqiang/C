#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define NUM		10
void input(int arr[], int n);//函数的声明
void output(int arr[], int n);
void maopao(int arr[], int n);
int main(int argc, const char *argv[])
{
	int arr[NUM] = {};

	input(arr, NUM);//函数调用
	output(arr, NUM);
	maopao(arr, NUM);
	output(arr, NUM);
	return 0;
} 
void input(int arr[], int n)//函数的定义
{
	int i = 0;
	srand(time(NULL));
	for (i=0; i<n; i++){//输入
		arr[i] = rand()%100;
	}
}

void output(int arr[], int n)
{
	int i = 0;
	for (i=0; i<n; i++){//输出
		printf("%d ", arr[i]);
	}
	printf("\n");
}

void maopao(int arr[], int n)
{
	int i = 0;
	int tmp = 0;
	int j = 0;
	for (j=0; j<n; j++){
	for (i=0; i<n-1; i++){
		if (arr[i] > arr[i+1]){
			tmp = arr[i];
			arr[i] = arr[i+1];
			arr[i+1] = tmp;
		}
	}
	}
}

