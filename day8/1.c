#include <stdio.h>

void sort(int arr[], int n);//函数声明
int main(int argc, const char *argv[])
{
	int arr[10] = {};
	int brr[100] = {};

	sort(arr, 10);
	sort(arr, 11);
	sort(arr, 12);
	......
	sort(brr, 100);
	return 0;
} 
void sort(int arr[], int n)//函数的定义
{
	int i = 0;
	int j = 0;
	//对10个数排序
	for (j=0; j<n; j++){
		for (i=0; i<n-1; i++){//冒泡
			if (arr[i] > arr[i+1]){//相邻成员比较
				tmp = arr[i];//交换
				arr[i] = arr[i+1];
				arr[i+1] = tmp;
			}
		}
	}
}
