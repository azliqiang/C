#include <stdio.h>

#define SIZE	100
int main(int argc, const char *argv[])
{
	char buf[SIZE] = "";
	int i = 0;
	int t = 0;
	gets(buf);

	for (i=0; *(buf+i); i++){
		if (*(buf+i) == ' '){
			t++;
		}
	}
	printf("t = %d\n", t+1);
	return 0;
} 
