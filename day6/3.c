#include <stdio.h>
#include <string.h>

#define SIZE	100	
int main(int argc, const char *argv[])
{
	char buf[SIZE] = "";
	//scanf("%s", buf);
	gets(buf);
//	fgets(buf, sizeof(buf), stdin);
//	buf[strlen(buf)-1] = 0;
	printf("buf = %s\n", buf);
	puts(buf);
	fputs(buf, stdout);
	return 0;
} 
