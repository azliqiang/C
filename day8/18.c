#include <stdio.h>
#include <string.h>

#define SIZE	100
char *deleteSpace(char *pBuf);//定义
int main(int argc, const char *argv[])
{
	char buf[SIZE] = "";
	gets(buf);

	printf("deleteSpace(buf) = %s\n",deleteSpace(buf));//函数调用
	return 0;
}


char *deleteSpace(char *pBuf)//定义
{
	char *pBufCp = pBuf;
	char *pCp = NULL;
	//sdk dfd fgf fgf
	for (; (pBuf=strstr(pBuf, "  ")); pBuf++){//遍历字符串
		for (pCp=pBuf; *pCp; pCp++){//循环前移
			*pCp = *(pCp+1);
		}
		pBuf--;
	}
	return pBufCp;
}
