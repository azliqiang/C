#include <stdio.h>

int main(int argc, const char *argv[])
{
	for (int i=0; i<5; i++){
		printf("i = %d\n", i);
	}
	printf("i = %d\n", i);//i是局部变量，具有块作用域
	return 0;
} 
