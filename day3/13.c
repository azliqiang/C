#include <stdio.h>

int main(int argc, const char *argv[])
{
	int num = 0;
	scanf("%d", &num);

	if ((num%3==0) && (num%5==0)){
		printf("Yes\n");
	} else {
		printf("No\n");
	}
	return 0;
} 
