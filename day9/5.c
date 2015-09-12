#include <stdio.h>

#define NAME_SIZE 20
struct student//结构体类型的声明
{
	int num;
	char name[NAME_SIZE];
	int score;
};

int main(int argc, const char *argv[])
{
	struct student std1 = {};
	struct student std2 = {};

	scanf("%d", &(std1.num));//输入学生信息
	getchar();
	gets(std1.name);
	scanf("%d", &(std1.score));

	scanf("%d", &(std2.num));
	getchar();
	gets(std2.name);
	scanf("%d", &(std2.score));

	if (std1.score > std2.score){//比较两个学生的成绩
		printf("std1.num = %d\nstd1.name = %s\nstd1.score = %d\n", std1.num, std1.name, std1.score);
	} else {
		printf("std2.num = %d\nstd2.name = %s\nstd2.score = %d\n", std2.num, std2.name, std2.score);
	}
	return 0;
} 
