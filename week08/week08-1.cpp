///Week08-1.cpp step02-1 �ɮ�
#include <stdio.h>
#include <string.h>
///Q: �}�C? �ܼ�?
char names[20][20]; ///20�H(�Ƽ�),�C�H�W����20
int grades[20];///20�Ӥ��� (�Ƽ�)
int main()
{
    ///int N;
    ///scanf("%d", &N); ///���F,�D�بS��N,���n�g

    ///��N��for()�j��,�SN��while()�j��

    char name[20];///20�Ӧr��
    int grade;///����
    int i=0;
    while( scanf("%s %d", &name, &grade)==2 ){
        strcpy(names[i], name); ///names[i] <- name
        grades[i] = grade; ///grades[i] <- grade
        i++;
    }
    int N = i;

    for(int i=0; i<N ; i++){
        printf("%s %d\n", names[i], grades[i] );
    }
}
