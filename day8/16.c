#include <stdio.h>
#include <string.h>

#define SIZE	100
int findWordNum(char *pBuf);
int main(int argc, const char *argv[])
{
	char buf[SIZE] = "";
	gets(buf);

	printf("findWordNum(buf) = %d\n", findWordNum(buf));
	return 0;
}

int findWordNum(char *pBuf)
{
	int i = 0;
	//sdfkh sdkfjhsdf sdf sdf
	for (; (pBuf=strchr(pBuf, ' ')); pBuf++, i++);
	return i+1;
}
