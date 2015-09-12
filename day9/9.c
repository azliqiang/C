#include <stdio.h>

#define NUM			5
#define NAME_SIZE	20
struct student//声明结构体类型
{
	int num;
	char name[NAME_SIZE];
	int age;
};

void input(struct student arr[], int n);//声明
void output(struct student arr[], int n);//声明
int main(int argc, const char *argv[])
{
	struct student arr[NUM] = {};//结构体数组

	input(arr, NUM);//调用
	output(arr, NUM);
	return 0;
} 
void input(struct student arr[], int n)//定义
{
	int i = 0;
	//输入
	for (i=0; i<n; i++){//arr[i]结构体变量
		scanf("%d", &(arr[i].num));
		getchar();
		gets(arr[i].name);
		scanf("%d", &(arr[i].age));
	}
}

void output(struct student arr[], int n)
{
	int i = 0;
	//输出
	for (i=0; i<n; i++){
		printf("arr[%d].num = %d\narr[%d].name = %s\narr[%d].age = %d\n", i, arr[i].num,  i, arr[i].name, i, arr[i].age);
	}
}
