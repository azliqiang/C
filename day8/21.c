#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define NUM		5
#define SIZE	100
void input(char *pArr[], int n);
void output(char *pArr[], int n);
char *maxBuf(char *pArr[], int n);
int main(int argc, const char *argv[])
{
	char *pArr[NUM] = {malloc(SIZE), malloc(SIZE),malloc(SIZE),malloc(SIZE),malloc(SIZE),};
	input(pArr, NUM);
	output(pArr, NUM);
	printf("max = %s\n", maxBuf(pArr, NUM));
	for (int i=0; i<NUM; i++){
		free(pArr[i]);
	}
	return 0;
} 
void input(char *pArr[], int n)
{
	int i = 0;
	for (i=0; i<n; i++){
		gets(pArr[i]);
	}
}
void output(char *pArr[], int n)
{
	int i = 0;
	for (i=0; i<n; i++){
		puts(pArr[i]);
	}
}
char *maxBuf(char *pArr[], int n)
{
	char *pMax = NULL;
	char *p = malloc(SIZE);
	int i = 0;
	for (pMax=pArr[0], i=0; i<n; i++){
		if (strcmp(pMax, pArr[i]) < 0){
			pMax = pArr[i];
		}
	}
	strcpy(p, pMax);
	return p;
}
