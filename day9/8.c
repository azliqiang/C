#include <stdio.h>

#define NUM			5
#define NAME_SIZE	20
struct student//声明结构体类型
{
	int num;
	char name[NAME_SIZE];
	int age;
};

int main(int argc, const char *argv[])
{
	struct student arr[NUM] = {};//结构体数组
	int i = 0;

	//输入
	for (i=0; i<NUM; i++){//arr[i]结构体变量
		scanf("%d", &(arr[i].num));
		getchar();
		gets(arr[i].name);
		scanf("%d", &(arr[i].age));
	}
	//输出
	for (i=0; i<NUM; i++){
		printf("arr[%d].num = %d\narr[%d].name = %s\narr[%d].age = %d\n", i, arr[i].num,  i, arr[i].name, i, arr[i].age);
	}
	return 0;
} 
