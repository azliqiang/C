#include <stdio.h>

enum Season{spring, summer, autumn, winter};//枚举类型的声明

int main(int argc, const char *argv[])
{
	enum Season season;//先声明枚举类型，在定义枚举变量
	for (season=spring; season<=winter; season++){
		printf("season = %d\n", season);
	}

	return 0;
} 
