#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define NUM		10
int main(int argc, const char *argv[])
{
	int arr[NUM] = {};
	int i = 0;
	int j = 0;
	int n = 0;
	int t = 0;//删除的次数进行计数

	srand(time(NULL));
	printf("数组成员值: ");
	for (i=0; i<NUM; i++){
		arr[i] = rand()%1;
		printf("%d ", arr[i]);
	}
	printf("\n");

	scanf("%d", &n);
	for (i=0; i<NUM-t; i++){//遍历数组
		if (arr[i] == n){//找到要删除的数
			for (j=i; j<NUM-1-t; j++){//循环前移
				arr[j] = arr[j+1];//前移
			}
			t++;//对删除的数进行计数
			i--;//下标前移
		}
	}

	for (i=0; i<NUM-t; i++){
		printf("%d ", arr[i]);
	}
	printf("\n");
	return 0;
} 









