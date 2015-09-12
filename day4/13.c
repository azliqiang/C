#include <stdio.h>

int main(int argc, const char *argv[])
{
	int i = 0;
	int sum = 0;

	scanf("%d", &i);
	while(i<=10){
		sum = sum + i;
		i++;
	}
	printf("sum = %d\n", sum);
	return 0;
} 
