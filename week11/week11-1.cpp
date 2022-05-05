///Week11-1.cpp step01-1 讀入 Hardwood那題
#include <stdio.h>
int main()
{
    int T;
    //scanf("%d", &T);
    FILE * fin = fopen("input.txt", "r");
    fscanf(fin, "%d", &T);///讀檔
    printf("你讀到了T: %d\n", T);
}
