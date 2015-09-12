#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define NUM		5
#define SIZE	100
void input(char **pp, int n);
void output(char **pp, int n);
void maopao(char **pp, int n);
int main(int argc, const char *argv[])
{
	char *pArr[NUM] = {malloc(SIZE), malloc(SIZE),malloc(SIZE),malloc(SIZE),malloc(SIZE),};
	input(pArr, NUM);
	maopao(pArr, NUM);
	output(pArr, NUM);
	return 0;
}

void input(char **pp, int n)
{
	int i = 0;
	for (i=0; i<n; i++){
		gets(*(pp+i));
	}
}
void output(char **pp, int n)
{
	int i = 0;
	for (i=0; i<n; i++){
		puts(*(pp+i));
	}
}

void maopao(char **pp, int n)
{
	int i = 0;
	char *pTmp = NULL;
	int j = 0;
	for (j=0; j<n; j++){//冒泡执行的次数
		for (i=0; i<n-1; i++){//冒泡
			if (strcmp(*(pp+i), *(pp+i+1)) > 0){
				pTmp = *(pp+i);
				*(pp+i) = *(pp+i+1);	
				*(pp+i+1) = pTmp;
			}
		}
	}
}
