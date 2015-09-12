#include <stdio.h>

int add(int a, int b)
{
	return a+b;
}

typedef int interger;//基本数据类型
typedef int Arr10[10];//数组
typedef int *Pointer;//一级指针
typedef int **PPointer;//二级指针
typedef int (*Pfun)(int a, int b);//函数指针

typedef struct student
{
	int num;
	char name[20];
}Studnet, *Pstudent;//结构体

typedef enum Season {spring, summer, autumn, winter}EnumSeason;//枚举

int main(int argc, const char *argv[])
{
	interger a;//整型变量
	Arr10 arr;//数组，数组成员10个
	Pointer p;//一级指针
	PPointer pp;//二级指针
	Pfun pfun = add;//函数指针
	Studnet std;//结构体变量
	Pstudent pstd;//结构体指针
	EnumSeason season;//枚举变量
	return 0;
} 
