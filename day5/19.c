#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define NUM		10
int main(int argc, const char *argv[])
{
	int arr[NUM+1] = {};
	int i = 0;
	int j = 0;
	int tmp = 0;
	int n = 0;

	srand(time(NULL));
	printf("数组成员值: ");
	for (i=0; i<NUM; i++){
		arr[i] = rand()%100;
		printf("%d ", arr[i]);
	}
	printf("\n");

	for (j=0; j<NUM; j++){//冒泡执行的次数
		for (i=0; i<NUM-1; i++){//冒泡
			if (arr[i] > arr[i+1]){//相邻成员比较
				tmp = arr[i];//交换
				arr[i] = arr[i+1];
				arr[i+1] = tmp;
			}
		}
	}
	printf("排序后的数组: ");
	for (i=0; i<NUM; i++){
		printf("%d ", arr[i]);
	}
	printf("\n");

	scanf("%d", &n);
	for (i=0,arr[NUM]=n; i<NUM; i++){//循环遍历数组
		if (arr[i] > n){//找到插入的位置
			for (j=NUM-1; j>=i; j--){//循环后移
				arr[j+1] = arr[j];//后移
			}
			arr[i] = n;//插入n
			break;//结束循环
		}
	}
	
	printf("插入后的数组");
	for (i=0; i<NUM+1; i++){
		printf("%d ", arr[i]);
	}
	printf("\n");
	return 0;
} 









