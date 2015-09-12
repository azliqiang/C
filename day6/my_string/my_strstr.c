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

	for (i=0; (buf1[i]!=0) && (buf2[j]!=0); i++)//遍历buf1
		for (j=0; (buf2[j]!=0) && (buf1[i+j]==buf2[j]); j++);//遍历buf2

	(!buf2[j])?printf("%s\n", buf1+i-1):printf("null\n");
	return 0;
} 
