#include <stdio.h>

int main(int argc, const char *argv[])
{
	int n = 0;
	for (n=16; n<100; n++){//n = 30(31----99)
		if (n%15 == 0){
			printf("n = %d\n", n);
			break;//结束循环(结束了31到99的循环)
		}
	}
	return 0;
} 
