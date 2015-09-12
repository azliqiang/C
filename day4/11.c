#include <stdio.h>

int main(int argc, const char *argv[])
{
	int i = 0;
	int sum = 1;
	int total = 0;

	i = 1;
	do {
		sum = sum * i;
		total = total + sum;
		i++;
	}while(i<=5);

	printf("sum = %d\n", sum);
	printf("total = %d\n", total);
	return 0;
} 
