#include <stdio.h>

#define NAME_SIZE	20
#define ADDR_SIZE	50

struct student	
{
	char name[NAME_SIZE];//姓名
	int num;//学号
	char sex;//性别
	int age;//年龄
	float score;//成绩
	char addr[ADDR_SIZE];//地址
}std1 = {"songhuiqiao", 2, 'W', 35, 99, "hui long guan"  };//声明的同时定义变量

int main(int argc, const char *argv[])
{
	struct student std2 = { "chenchao", 1, 'M', 25, 100, "hui long guan"};//先声明后定义
	return 0;
} 
