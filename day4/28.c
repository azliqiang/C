#include <stdio.h>

int main(int argc, const char *argv[])
{
	char ch = 0;
	int n_c = 0;
	int n_n = 0;
	int n_s = 0;
	int n_e = 0;

	while ((ch = getchar()) != '#'){
		if (((ch>='A') && (ch<='Z')) || ((ch>='a') && (ch<='z'))){
			n_c++;
		} else if ((ch>='0') && (ch<='9')){
			n_n++;
		} else if (ch == ' '){
			n_s++;
		} else {
			n_e++;
		}
	}
	printf("字母的个数 = %d\n", n_c);
	printf("数字的个数 = %d\n", n_n);
	printf("空格的个数 = %d\n", n_s);
	printf("其他的个数 = %d\n", n_e);
	return 0;
} 
