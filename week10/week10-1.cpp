///Week10-1.cpp step01-1
///�p��,�n�� .cpp ���ɦW
///(1)Ū�ɮ� FILE * fin=fopen("�ɦW", "r");
#include <stdio.h>
char name[100][30];
int grade[100];
int main()
{
    FILE * fin = fopen("input.txt", "r");
    int N;
  ///scanf("%d", &N);///�H�e�g�k
    fscanf( fin, "%d", &N );
    ///�u�O���U printf("Ū��N�O: %d\n", N);
    for(int i=0; i<N; i++){
      ///scanf("%s %d", name[i], &grade[i] );
        fscanf( fin, "%s %d", name[i], &grade[i] );
        ///�u�O���U printf("Ū��F %s %d\n", name[i], grade[i] );
    }

    for(int i=0; i<N; i++){
        printf("%s %d\n", name[i], grade[i] );
    }
}
