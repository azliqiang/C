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
	struct student *pArr = arr;//指向结构体数组首元素的指针
	int i = 0;

	//输入
	for (i=0; i<NUM; i++){//arr[i]结构体变量
		scanf("%d", &((pArr+i)->num));
		getchar();
		gets((pArr+i)->name);
		scanf("%d", &((pArr+i)->age));
	}
	//输出
	for (i=0; i<NUM; i++){
		printf("(pArr+%d)->num = %d\n(pArr+%d)->name = %s\n(pArr+%d)->age = %d\n", i, (pArr+i)->num,  i, (pArr+i)->name, i, (pArr+i)->age);
	}
	return 0;
} 
