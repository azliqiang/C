#include <stdio.h>

#define NAME_SIZE	20
#define NUM			5

struct student //结构体类型的声明
{
	int num;
	char name[NAME_SIZE];
	int score;
};

void input(struct student arr[], int n);
void output(struct student arr[], int n);
void sortStudentFromScore(struct student arr[], int n);
int main(int argc, const char *argv[])
{
	struct student arr[NUM] = {};//结构体数组
	struct student max = {};
	input(arr, NUM);
	sortStudentFromScore(arr, NUM);
	printf("排序后的数组:\n");
	output(arr, NUM);
	return 0;
} 

void input(struct student arr[], int n)
{
	int i = 0;
	for (i=0; i<n; i++){
		scanf("%d", &(arr[i].num));
		getchar();
		gets(arr[i].name);
		scanf("%d", &(arr[i].score));
	}
}
void output(struct student arr[], int n)
{
	int i = 0;
	for (i=0; i<n; i++){
		printf("arr[%d].num = %d\narr[%d].name = %s\narr[%d].score = %d\n", i, arr[i].num, i, arr[i].name, i, arr[i].score);
	}
}

void sortStudentFromScore(struct student arr[], int n)
{
	struct student tmp = {};
	int i = 0;
	int j = 0;
	for (j=0; j<n; j++){//冒泡执行的次数
	for (i=0; i<n-1; i++){//冒泡
		if (arr[i].score > arr[i+1].score){//相邻成员比较
			tmp = arr[i];//交换
			arr[i] = arr[i+1];
			arr[i+1] = tmp;
		}
	}
	}
}


















