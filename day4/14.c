#include <stdio.h>

int main(int argc, const char *argv[])
{
	int i = 0;
	int sum = 0;

	scanf("%d", &i);
	do{
		sum = sum + i;
		i++;
	}while(i <= 10);
	printf("sum = %d\n", sum);
	return 0;
} 
