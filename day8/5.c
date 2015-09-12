#include <stdio.h>

int common_divisor(int n1, int n2);//函数声明
int common_multiple(int n1, int n2);//函数声明
int main(int argc, const char *argv[])
{
	int n1 = 0;
	int n2 = 0;

	scanf("%d", &n1);
	scanf("%d", &n2);

	printf("common_divisor(n1, n2) = %d\n", common_divisor(n1, n2));//函数调用
	printf("common_multiple(n1, n2) = %d\n", common_multiple(n1, n2));//函数调用
	return 0;
} 
int common_divisor(int n1, int n2)//函数定义
{
	int i = 0;
	for (i=(n1<n2?n1:n2); i>=1; i--){
		if ((n1%i==0) && (n2%i==0)){
			break;
		}
	}
	return i;
}

int common_multiple(int n1, int n2)//函数定义
{
	int i = 0;
	for (i=(n1>n2?n1:n2); i<=(n1*n2); i++){
		if ((i%n1==0) && (i%n2==0)){
			break;
		}
	}
	return i;
}
