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
};//声明的同时定义变量

int main(int argc, const char *argv[])
{
	struct student std1 = { "chenchao", 1, 'M', 25, 100, "hui long guan"};//先声明后定义
	struct student *p = &std1;//初始化
	printf("std1.name = %s\nstd1.num = %d\nstd1.sex = %c\nstd1.age = %d\nstd1.score = %f\nstd1.addr = %s\n", std1.name, std1.num, std1.sex, std1.age, std1.score, std1.addr);//结构体变量名
	printf("(*p).name = %s\n(*p).num = %d\n(*p).sex = %c\n(*p).age = %d\n(*p).score = %f\n(*p).addr = %s\n", (*p).name, (*p).num, (*p).sex, (*p).age, (*p).score, (*p).addr);//指向结构体变量的指针
	printf("p->name = %s\np->num = %d\np->sex = %c\np->age = %d\np->score = %f\np->addr = %s\n", p->name, p->num, p->sex, p->age, p->score, p->addr);//指向结构体变量的指针
	printf("(&std1)->name = %s\n(&std1)->num = %d\n(&std1)->sex = %c\n(&std1)->age = %d\n(&std1)->score = %f\n(&std1)->addr = %s\n", (&std1)->name, (&std1)->num, (&std1)->sex, (&std1)->age, (&std1)->score, (&std1)->addr);//结构体变量名
	return 0;
} 
