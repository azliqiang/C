#include <stdio.h>

int main(int argc, const char *argv[])
{
	int n = 0;
	int i = 0;
	scanf("%d", &n);

	for (i=2; i<n; i++){
		if (n % i == 0){
			break;//i!=n
		}
	}
	(i==n)?printf("YES\n"):printf("NO\n");
	return 0;
} 
