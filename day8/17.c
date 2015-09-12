#include <stdio.h>
#include <string.h>

#define SIZE	100
char *deleteNumCh(char *pBuf);//声明
int main(int argc, const char *argv[])
{
	char buf[SIZE] = "";
	gets(buf);

	printf("deleteNumCh(buf) = %s\n",deleteNumCh(buf));//函数调用
	return 0;
}


char *deleteNumCh(char *pBuf)//定义
{
	int i = 0;
	int j = 0;
	for (i=0; *(pBuf+i); i++){
		if ((*(pBuf+i)>='0') && (*(pBuf+i)<='9')){
			for (j=i; *(pBuf+j); j++){
				*(pBuf+j) = *(pBuf+j+1);
			}
			i--;
		}	
	}
	return pBuf;
}
