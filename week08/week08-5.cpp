///Week08-5.cpp step03-3
#include <stdio.h>
#include <string.h>
char names[3][20];///3�W�r, �C�ӦW�r�̦h20�r��
int grades[3];///step02-2�}�C
int main()
{///���]��3�����
    char name[20];///�@�Ӧr�� (20�Ӧr��)
    int grade;///�@�Ӿ��
    for(int i=0; i<3; i++){
        scanf("%s", name);///Ū�J�W�r
        scanf("%d", &grade);///Ū�J����
        strcpy( names[i], name );///��W�r, �ƻs�� names[i]�}�C
        grades[i] = grade; ///�����,�i�J grades[i]�}�C
    }
    FILE * fout = fopen("file.txt", "w+" );
    for(int i=0; i<3; i++){
        printf("%s %d\n", names[i], grades[i] );
        fprintf(fout, "%s %d\n", names[i], grades[i] );
    }

}

