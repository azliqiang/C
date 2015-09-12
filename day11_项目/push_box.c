#include <stdio.h>


void printMap(char map[][10]);


void shoveBox(char map[][10]);




int main(int argc, const char * argv[])
{
    char map[][10] = {
        {'#', '#', '#', '#', '#', '#', '#', '#', '#', '#'},
        {'#', ' ', '#', '#', '#', '#', '#', '#', '#', '#'},
        {'#', ' ', ' ', '#', ' ', '#', '#', '#', '#', '#'},
        {'#', '#', ' ', ' ', ' ', '#', '#', '#', '#', '#'},
        {'#', '#', ' ', ' ', ' ', ' ', ' ', ' ', '#', '#'},
        {'#', '#', ' ', '0', ' ', ' ', ' ', ' ', '#', '#'},
        {'#', '#', ' ', 'x', ' ', ' ', ' ', ' ', '#', '#'},
        {'#', '#', ' ', ' ', ' ', ' ', ' ', ' ', '#', '#'},
        {'#', '#', ' ', ' ', ' ', ' ', ' ', '#', '#', '#'},
        {'#', '#', '#', '#', '#', '#', ' ', '#', '#', '#'}
    };
    
    printMap(map);
    shoveBox(map);
    
    
    return 0;
}


void shoveBox(char map[][10])
{
    int pX = 6;
    int pY = 3; //人物的坐标
    
    int bX = 5;
    int bY = 3; //箱子坐标
    char key = ' ';
    printf("X代表人，0代表箱子，w,s,a,d控制方向\n");
    while (map[bX][bY] != map[9][6]) { //循环，如果箱子不在出口一直循环
        scanf("%c",&key); //输入方向键控制人物
        getchar();
        switch (key) {
            case 'w': //往上
                if (map[pX-1][pY] == '0' && map[bX-1][bY] == ' ') { //人物前面如果有箱子,并且箱子在上，箱子前面是空
                    map[pX][pY] = ' ';
                    map[bX][bY] = 'x';
                    map[bX-1][bY] = '0';
                    --pX;
                    --bX;
                }else if (map[pX-1][pY] == ' '){ //人物前面如果是空
                    map[pX][pY] = ' ';
                    map[pX-1][pY] = 'x';
                    --pX;
                }
                break;
                
            case 's': // 往下
                if (map[pX+1][pY] == '0' && map[bX+1][bY] == ' ') { //人物前面如果有箱子
                    map[pX][pY] = ' ';
                    map[bX][bY] = 'x';
                    map[bX+1][bY] = '0';
                    ++pX;
                    ++bX;
                }else if (map[pX+1][pY] == ' '){ //人物前面如果是空
                    map[pX][pY] = ' ';
                    map[pX+1][pY] = 'x';
                    
                    ++pX;
                }
                break;
                
            case 'a': // 往左
                if (map[pX][pY-1] == '0' && map[bX][bY-1] == ' ') { //人物前面如果有箱子
                    map[pX][pY] = ' ';
                    map[bX][bY] = 'x';
                    map[bX][bY-1] = '0';
                    --pY;
                    --bY;
                }else if (map[pX][pY-1] == ' '){ //人物前面如果是空
                    map[pX][pY] = ' ';
                    map[pX][pY-1] = 'x';
                    
                    --pY;
                }
                break;
                
            case 'd': // 往右
                if (map[pX][pY+1] == '0' && map[bX][bY+1] == ' ') { //人物前面如果有箱子
                    map[pX][pY] = ' ';
                    map[bX][bY] = 'x';
                    map[bX][bY+1] = '0';
                    ++pY;
                    ++bY;
                }else if (map[pX][pY+1] == ' '){ //人物前面如果是空
                    map[pX][pY] = ' ';
                    map[pX][pY+1] = 'x';
                    
                    ++pY;
                }
                break;
        }
        printMap(map);
    }
}








/**
 * 打印地图
 *
 * @param map 地图
 */
void printMap(char map[][10])
{
    for (int x = 0; x <= 10 -1 ; x++) {
        for (int j = 0 ; j <= 10 - 1; j++) {
            printf("%c", map[x][j]);
        }
        printf("\n");
        
    }
    if (map[9][6] == '0') {
        printf("成功！\n");
    }
}
