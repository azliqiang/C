#include <stdio.h>

int main(int argc, const char *argv[])
{
	int n = 0;
	int sum = 0;
	scanf("%d", &n);

	for (; n!=0;){
		sum = sum + n%10;
		printf("%d ", n%10);
		n = n / 10;
	}
	printf("\nsum = %d\n", sum);
	return 0;
} 
