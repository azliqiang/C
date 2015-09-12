#include <stdio.h>

int main(int argc, const char *argv[])
{
	int i = 0;
	int j = 0;

	for (i=1; i<=4; i++){//行
		for (j=1; j<=5; j++){//列
			printf("%5d", i*j);//数 = 行*列
		}
		printf("\n");//输出完一行后换行
	}
	return 0;
} 
