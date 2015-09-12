#include <stdio.h>
#include <string.h>

#define SIZE	100
char findFirstOneCh(char *pBuf);//声明
int main(int argc, const char *argv[])
{
	char buf[SIZE] = "";
	gets(buf);

	printf("findFirstOneCh(buf) = %c\n", findFirstOneCh(buf));//函数调用
	return 0;
}

char findFirstOneCh(char *pBuf)//定义
{
	int flag = 0;
	int i = 0;
	int j = 0;
	for (i=0; *(pBuf+i); i++){//遍历字符串
		for (j=0, flag=0; *(pBuf+j); j++){//遍历字符串
			if (*(pBuf+i) == *(pBuf+j)){//找到出现的字符
				flag++;//计数
			}
		}
		if (flag == 1){//找到了
			return *(pBuf+i);
		}
	}
	return 0;
}
