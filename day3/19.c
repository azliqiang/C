#include <stdio.h>

int main(int argc, const char *argv[])
{
	int day = 0;
	scanf("%d", &day);

	switch (day){
		case 1:printf("Monday\n");//break;
		case 2:printf("星期二\n");//break;
		case 3:printf("星期三\n");//break;
		case 4:printf("星期四\n");//break;
		case 5:printf("Friday\n");//break;
		case 6:printf("星期六\n");//break;
		case 7:printf("Sunday\n");//break;
	}
	return 0;
} 
