#include <stdio.h>

#define NUM			5
#define NAME_SIZE	20
struct student//声明结构体类型
{
	int num;
	char name[NAME_SIZE];
	int age;
};
void input(struct student *pArr, int n);//声明
void output(struct student *pArr, int n);

int main(int argc, const char *argv[])
{
	struct student arr[NUM] = {};//结构体数组
	struct student *pArr = arr;//指向结构体数组首元素的指针

	input(arr, NUM);
	output(arr, NUM);
	return 0;
} 
void input(struct student *pArr, int n)//定义
{
	int i = 0;
	//输入
	for (i=0; i<n; i++){//arr[i]结构体变量
		scanf("%d", &((pArr+i)->num));
		getchar();
		gets((pArr+i)->name);
		scanf("%d", &((pArr+i)->age));
	}
}
void output(struct student *pArr, int n)
{
	int i = 0;
	//输出
	for (i=0; i<n; i++){
		printf("(pArr+%d)->num = %d\n(pArr+%d)->name = %s\n(pArr+%d)->age = %d\n", i, (pArr+i)->num,  i, (pArr+i)->name, i, (pArr+i)->age);
	}
}
