#include <stdio.h>

void judge(int n);//函数的声明
int main(int argc, const char *argv[])
{
	int n = 0;
	scanf("%d", &n);
	judge(n);//函数调用
	return 0;
} 
void judge(int n)//函数的定义
{
	if ((n%3==0) && (n%5==0)){
		printf("YES\n");
	} else {
		printf("NO\n");
	}
}
