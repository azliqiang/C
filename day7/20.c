#include <stdio.h>
#include <string.h>

#define SIZE	100
int main(int argc, const char *argv[])
{
	char buf[SIZE] = "";
	char *p = buf;
	char *pCp = NULL;
	int i = 0;
	int j = 0;
	gets(buf);

	for (; (p = strstr(p, "  ")); p++){//遍历连续空格
		for (pCp=p; *(pCp); pCp++){//循环前移
			*pCp = *(pCp+1);
		}
		p--;//重复
	}
	
	printf("buf = %s\n", buf);
	return 0;
} 
