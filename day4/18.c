#include <stdio.h>

int main(int argc, const char *argv[])
{
	int n = 0;
	int i = 0;
	scanf("%d", &n);//1739

	for (i=0; n!=0; i++){//i=4
		n = n / 10;//n = 173//17//1//0
	}
	printf("i = %d\n", i);
	return 0;
} 
