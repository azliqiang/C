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
	struct student std3 = {};
	struct student tmp = {};

	scanf("%d", &(std1.num));//输入学生信息
	getchar();
	gets(std1.name);
	scanf("%d", &(std1.score));

	scanf("%d", &(std2.num));
	getchar();
	gets(std2.name);
	scanf("%d", &(std2.score));

	scanf("%d", &(std3.num));
	getchar();
	gets(std3.name);
	scanf("%d", &(std3.score));

	if (std1.score > std2.score){
		tmp = std1;
		std1 = std2;
		std2 = tmp;
	}
	if (std1.score > std3.score){
		tmp = std1;
		std1 = std3;
		std3 = tmp;
	}
	if (std2.score > std3.score){
		tmp = std2;
		std2 = std3;
		std3 = tmp;
	}
	printf("std1.num = %d\nstd1.name = %s\nstd1.scre = %d\n", std1.num, std1.name, std1.score);
	printf("std2.num = %d\nstd2.name = %s\nstd2.scre = %d\n", std2.num, std2.name, std2.score);
	printf("std3.num = %d\nstd3.name = %s\nstd3.scre = %d\n", std3.num, std3.name, std3.score);
	return 0;
} 









