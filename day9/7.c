#include <stdio.h>

#define NAME_SIZE	20
#define ADDR_SIZE	50
#define NUM			10

struct student	
{
	char name[NAME_SIZE];//姓名
	int num;//学号
	char sex;//性别
	int age;//年龄
	float score;//成绩
	char addr[ADDR_SIZE];//地址
};//结构体类型的声明

int main(int argc, const char *argv[])
{
	struct student arr[NUM] = {};//结构体数组，数组成员10个
	struct student (*pArr1) = arr;//初始化
	struct student (*pArr2) = NULL;
	pArr2 = arr;//赋值语句
	return 0;
} 
