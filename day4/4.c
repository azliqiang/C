#include <stdio.h>

int main(int argc, const char *argv[])
{
	int i = 0;

	i = 0;//循环变量初值
	while(i < 100){//循环条件
		if (i%2 == 0){//偶数
			printf("i = %d\n", i);
		}
		else if (i%2 == 1){//奇数
			printf("i = %d\n", i);
		}
		else if (i%3 == 0){//3的倍数
			printf("i = %d\n", i);
		}
		i++;//增值
	}
	return 0;
} 
