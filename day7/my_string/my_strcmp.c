#include <stdio.h>

#define SIZE		100
int main(int argc, const char *argv[])
{
	char buf1[SIZE] = "";
	char buf2[SIZE] = "";
	int i = 0;
	int j = 0;

	gets(buf1);
	gets(buf2);

	for (i=0; *(buf1+i) && *(buf2+i); i++){
		if (*(buf1+i) != *(buf2+i)){
			break;
		}
	}

	printf("*(buf1+%d)-*(buf2+%d) = %d\n", i, i, *(buf1+i)-*(buf2+i));
	return 0;
} 
