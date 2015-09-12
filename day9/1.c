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
};//结构体类型的声明

struct teacher
{
	char name[NAME_SIZE];
	int age;
	char sex;
};

struct birthday
{
	int year;
	int month;
	int day;
};


int main(int argc, const char *argv[])
{
	return 0;
} 
