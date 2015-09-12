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
struct student maxScore(struct student arr[], int n);
int main(int argc, const char *argv[])
{
	struct student arr[NUM] = {};//结构体数组
	struct student max = {};
	input(arr, NUM);
	max = maxScore(arr, NUM);
	printf("max.num = %d\nmax.name = %s\nmax.score = %d\n", max.num, max.name, max.score);
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

struct student maxScore(struct student arr[], int n)
{
	struct student max = {};
	int i = 0;
	for (max=arr[0], i=0; i<n; i++){//遍历结构体数组
		if (max.score < arr[i].score){//将数组成员和max进行
			max = arr[i];
		}
	}
	return max;
}











