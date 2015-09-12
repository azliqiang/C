#include <stdio.h>

int main(int argc, const char *argv[])
{
	char beginCh = 0;
	char endCh = 0;

	beginCh = getchar()+1;
	endCh = getchar();

	do {
		printf("%c", beginCh);
		beginCh++;
	}while(beginCh<endCh);
	return 0;
} 
