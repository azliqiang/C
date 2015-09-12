#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define NUM		10
void input(int score[], int n);//函数的声明
void output(int score[], int n);
int average(int score[], int n);
int main(int argc, const char *argv[])
{
	int score[NUM] = {};

	input(score, NUM);//函数调用
	output(score, NUM);
	printf("average = %d\n", average(score, NUM));
corereturn 0;
} 
void input(int score[], int n)//函数的定义
{
	int i = 0;
	srand(time(NULL));
	for (i=0; i<n; i++){//输入
		score[i] = rand()%100;
	}
}

void output(int score[], int n)
{
	int i = 0;
	for (i=0; i<n; i++){//输出
		printf("%d ", score[i]);
	}
	printf("\n");
}

int average(int score[], int n)
{
	int i = 0;
	int sum = 0;
	for (i=0; i<n; i++){//求平均年龄
		sum = sum + score[i];
	}
	return (sum/n);
}
