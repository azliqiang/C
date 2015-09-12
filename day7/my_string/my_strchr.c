#include <stdio.h>

#define SIZE		100
int main(int argc, const char *argv[])
{
	char buf[SIZE] = "";
	char ch = 0;
	int i = 0;

	gets(buf);
	ch = getchar();
	
	for (i=0; *(buf+i); i++){
		if (*(buf+i) == ch){
			break;
		}
	}

	if(*(buf+i)==0){
		printf("null\n");
	} else {
		printf("%s\n", buf+i);
	}

	return 0;
} 
