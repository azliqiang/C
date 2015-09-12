#include <stdio.h>

int main(int argc, const char *argv[])
{
	int i = 0;

	i = 0;//循环变量初值
	do {
		printf("i = %d\n", i);//循环体
		i++;//循环变量增值
	}while(i<10);//循环条件
	return 0;
}

#if 0
1:重复做的事------->{}循环体
printf

2:重复的次数
i=0;//循环变量初值
i<10;//循环条件
i++;//循环趋于结束

#endif
