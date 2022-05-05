///Week11-2.cpp step02-1 讀入 Hardwood那題
///多學會了 fgets()
/// gets(line)  vs. fgets(line, 長度, fin)
///    跳行會不見    跳行還會在
#include <stdio.h>
char line[100];
int main()
{
    int T;
    //scanf("%d", &T);
    FILE * fin = fopen("input.txt", "r");
    fscanf(fin, "%d", &T);///讀檔
    printf("你讀到了T: %d\n", T);
    /// scanf() vs.  gets()
    ///fscanf() vs. fgets()
    ///while( gets(line) ){
    while( fgets(line, 100, fin) ){
        printf("讀到了= %s =\n", line );///做處理
    }
}
