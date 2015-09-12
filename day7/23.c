#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define NUM		5
#define SIZE	100
int main(int argc, const char *argv[])
{
	char *pArr[NUM] = {malloc(SIZE),malloc(SIZE), malloc(SIZE), malloc(SIZE), malloc(SIZE)};
	int i = 0;
	for (i=0; i<NUM; i++){
		gets(pArr[i]);
	}
	char *pMax = NULL;

	for (pMax=pArr[0],i=0; i<NUM; i++){//遍历数组
		if (strcmp(pMax, pArr[i]) < 0){//将pMax和数组成员比较
			pMax = pArr[i];
		}
	}
	printf("pMax = %s\n", pMax);
	return 0;
} 
