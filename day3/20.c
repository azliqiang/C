#include <stdio.h>
#include <unistd.h>

int main(int argc, const char *argv[])
{
	int h = 0;
	int m = 0;
	int s = 0;

	scanf("%d%d%d", &h, &m, &s);

	while(1){
		s++;
		if (s == 60){
			s = 0;
			m++;
			if (m == 60){
				m = 0;
				h++;
				if (h == 24){
					h = 0;
					printf("%02d:%02d:%02d", h, m, s);
				} else {
					printf("%02d:%02d:%02d", h, m, s);
				}
			} else {
				printf("%02d:%02d:%02d", h, m, s);
			}
		} else {
			printf("%02d:%02d:%02d", h, m, s);
		}
		sleep(1);
		fflush(stdout);
		printf("\r");
	}
	return 0;
} 
