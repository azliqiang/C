#include <stdio.h>

int main(int argc, const char *argv[])
{
	int i = 0;
	int sum = 0;

	i = 0;
	do {
		sum = sum + i;
		i++;
	}while(i <= 100);

	printf("sum = %d\n", sum);
	return 0;
} 
