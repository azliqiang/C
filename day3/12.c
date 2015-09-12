#include <stdio.h>

int main(int argc, const char *argv[])
{
	char ch = 0;

	ch = getchar();

	if ((ch>='A') && (ch<='Z')){//大写字母
		printf("ch = %c\n", ch + 32);
	} else {//其他字符
		printf("ch = %c\n", ch);
	}
	return 0;
} 
