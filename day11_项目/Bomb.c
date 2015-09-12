#include <stdio.h>
#include <time.h>

int main(void)
{
    
    
    
	int a[5][5] = {};
	int b[5][5] = {};
	int n, flag, lose = 0, cnt = 0;
	int i, j, k, ii, jj;
	n = 6;
	flag = 1;
	srand(time(NULL));

	for(k = 0; k < n; k++){ // 布雷
		i = rand() % 5;
		j = rand() % 5;

		if(a[i][j] != '@'){
			a[i][j] = '@';

/* 生成雷之后，将雷的一周+1 */
			for(ii = i - 1; ii <= i + 1; ii++){
				for(jj = j - 1; jj <= j + 1; jj++){
						if(ii < 0 || jj < 0 
						|| ii > 4 || jj > 4)
							continue;
						if(a[ii][jj] != '@')
							a[ii][jj]++;
				}
			}

		}else
			k--;
	}

	while(1){
/* 打印矩阵 */
		for(i = 0; i < 5; i++){
			for(j = 0; j < 5; j++){
				if(flag && b[i][j] != -1){
					//打印？或者值
					printf("(%d,%d)?\t", i, j);
				}else
					printf("(%d,%d)%d\t", i, j, a[i][j]);
	
			}
			printf("\n");
		}

		if(lose == -1 || cnt == 25 - n)
				//退出条件
			break;

		scanf("%d%d", &i, &j);
		//读入坐标
		if(a[i][j] == '@'){
			flag = 0;
			lose = -1;
		//如果踩雷 lose ＝ －1
		}else if(b[i][j] != -1){
			b[i][j] = -1;
			cnt++;
		//如果不是雷 计数
		}
	}

	if(lose == -1){
		printf("You lose!\n");
	}else
		printf("You win!\n");

	return 0;
}
