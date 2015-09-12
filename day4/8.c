#include <stdio.h>

int main(int argc, const char *argv[])
{
	int i = 0;

	i = 1;
	do {
		if (i%2 == 0){//偶数
			printf("i = %d\n", i);
		}
		if (i%2 == 1){//奇数
			printf("i = %d\n", i);
		}
		if (i%3 == 0){//3的倍数
			printf("i = %d\n", i);
		}
		i++;
	}while(i < 100);
	return 0;
} 
