///Week11-2.cpp step02-1 Ū�J Hardwood���D
///�h�Ƿ|�F fgets()
/// gets(line)  vs. fgets(line, ����, fin)
///    ����|����    �����ٷ|�b
#include <stdio.h>
char line[100];
int main()
{
    int T;
    //scanf("%d", &T);
    FILE * fin = fopen("input.txt", "r");
    fscanf(fin, "%d", &T);///Ū��
    printf("�AŪ��FT: %d\n", T);
    /// scanf() vs.  gets()
    ///fscanf() vs. fgets()
    ///while( gets(line) ){
    while( fgets(line, 100, fin) ){
        printf("Ū��F= %s =\n", line );///���B�z
    }
}
