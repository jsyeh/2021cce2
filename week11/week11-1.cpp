///Week11-1.cpp step01-1 Ū�J Hardwood���D
#include <stdio.h>
int main()
{
    int T;
    //scanf("%d", &T);
    FILE * fin = fopen("input.txt", "r");
    fscanf(fin, "%d", &T);///Ū��
    printf("�AŪ��FT: %d\n", T);
}
