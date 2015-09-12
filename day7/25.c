#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, const char *argv[])
{
	int n = 0;
	scanf("%d", &n);
	char *p = malloc(sizeof(char)*n);
	strcpy(p, "bei jing huan ying nin");
	printf("p = %s\n", p);
	free(p);
	printf("p = %s\n", p);
	return 0;
} 
