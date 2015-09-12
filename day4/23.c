#include <stdio.h>

int main(int argc, const char *argv[])
{
	int money = 0;
	int sum = 0;
	int i = 0;
	for (i=0; i<10; i++){
		scanf("%d", &money);//每个学生捐钱
		sum = sum + money;//对学生捐钱进行求和
		if (sum >= 100){//捐款大于100，不捐了
			break;//结束循环
		}
	}
	printf("sum = %d\n", sum);
	printf("i = %d\n", i);
	return 0;
} 
