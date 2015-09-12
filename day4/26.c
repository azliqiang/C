#include <stdio.h>

int main(int argc, const char *argv[])
{
	int i = 0;
	for (i=100; i<200; i++){
		if (i%3 == 0){
			continue;//结束循环的某一次
		}
		printf("i = %d\n", i);
	}
	return 0;
} 
