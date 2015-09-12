#include <stdio.h>
#include <stdlib.h>

void test(void){
	printf("111111111111111111\n");
	exit(1);	
	printf("222222222222222222\n");
}

int main(int argc, const char *argv[])
{
	test();
	printf("333333333333333333\n");
	return 0;
} 
