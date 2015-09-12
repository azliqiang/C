#include <stdio.h>
#define NUM		5

int main(int argc, const char *argv[])
{
	int arr[NUM] = {};
	int *p = arr;


	for(; p<arr+5; p++){//p=&arr[0];p=&arr[1]
		scanf("%d", p);
	}

	for (p=arr; p<(arr+5); p++){
		printf("*p = %d\n", *p);
	}
	return 0;
} 
