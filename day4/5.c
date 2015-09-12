#include <stdio.h>

int main(int argc, const char *argv[])
{
	int i = 0;
	int sum = 0;//保存前n-1个数的和

	i = 1;
	while(i <= 100){
		sum = sum + i;//累加
		i++;
	}
	printf("sum = %d\n", sum);
	return 0;
} 
