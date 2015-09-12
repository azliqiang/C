#include <stdio.h>

int main(int argc, const char *argv[])
{
	char a;
	short b;
	int c;
	long d;

	float e;
	double f;

#if 0
	scanf("%c", &a);
	scanf("%hd", &b);
	scanf("%d", &c);
	scanf("%ld", &d);
	scanf("%f", &e);
	scanf("%lf", &f);
	printf("a = %c\n", a);
	printf("b = %hd\n", b);
	printf("c = %d\n", c);
	printf("d = %ld\n", d);
	printf("e = %f\n", e);
	printf("f = %lf\n", f);
#endif
	scanf("%c%hd%d%ld%f%lf", &a, &b, &c, &d, &e, &f);
	printf("a = %c\nb = %hd\nc = %d\nd = %ld\ne = %f\nf = %lf\n", a, b, c, d, e, f);
	return 0;
} 
