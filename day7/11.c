#include <stdio.h>

#define NUM		5
int main(int argc, const char *argv[])
{
	int arr[NUM] = {1, 2, 3, 4, 5};
	int *pArr = arr;

	for (; pArr<(arr+5); printf("%d ", *pArr++));
	printf("\n");

#if 0 
	for (i=0; i<NUM; i++){
		printf("%d ", arr[i]);
	}
	printf("\n");

	for (i=0; i<NUM; i++){
		printf("%d ", pArr[i]);
	}
	printf("\n");

	for (i=0; i<NUM; i++){
		printf("%d ", *(arr+i));
	}
	printf("\n");

	for (i=0; i<NUM; i++){
		printf("%d ", *(pArr+i));
	}
	printf("\n");
#endif
	return 0;
} 
