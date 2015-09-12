#include <stdio.h>
#include <string.h>

#define NUM			5
int main(int argc, const char *argv[])
{
	char *pArr[NUM] = {"bei", "jing", "huan", "ying", "nin"};
	int i = 0;
	char *pTmp = NULL;
	int j = 0;

	for (j=0; j<NUM; j++){
		for (i=0; i<(NUM-1); i++){//冒泡
			if (strcmp(pArr[i], pArr[i+1]) > 0){//相邻成员比较
				pTmp = pArr[i];//交换
				pArr[i] = pArr[i+1];
				pArr[i+1] = pTmp;
			}
		}
	}

	for (i=0; i<NUM; i++){
		printf("%s\n", pArr[i]);
	}
	return 0;
} 
