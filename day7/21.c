#include <stdio.h>

#define SIZE	100
int main(int argc, const char *argv[])
{
	char buf[SIZE] = "";
	int i = 0;
	int j = 0;
	int flag = 0;
	gets(buf);


	for (i=0; *(buf+i); i++){//取出buf中的每个字符
		for (j=0, flag=0; *(buf+j); j++){//查找每个字符出现的次数
			if (*(buf+i) == *(buf+j)){
				flag++;//计数
			}
		}
		if (flag == 1){//判断出现的次数
			break;
		}
	}

	if (*(buf+i) == 0){
		printf("没有\n");
	} else {
		printf("%c\n", *(buf+i));
	}
	return 0;
} 
