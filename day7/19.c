#include <stdio.h>

#define SIZE	100
int main(int argc, const char *argv[])
{
	char buf[SIZE] = "";
	int i = 0;
	int j = 0;
	gets(buf);

	for (i=0; *(buf+i); i++){//遍历buf
		if ((*(buf+i)>='0') && (*(buf+i)<='9')){//在buf中找到数组字符
			for (j=i; *(buf+j); j++){//循环前移
				*(buf+j) = *(buf+j+1);
			}
			i--;//重复
		}
	}
	printf("buf = %s\n", buf);
	return 0;
} 
