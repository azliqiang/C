#include <stdio.h>

#define SIZE		100
int main(int argc, const char *argv[])
{
	char buf[SIZE] = "";
	char ch = 0;
	int i = 0;

	gets(buf);
	ch = getchar();

	for (;  (buf[i]!=0) && (buf[i]!=ch); i++);//遍历buf
	(buf[i]==0)?printf("null\n"):printf("%s", buf+i);

	return 0;
} 
