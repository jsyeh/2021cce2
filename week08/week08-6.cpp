///Week08-6.cpp step03-4 Ū�J Input �ɮ�
#include <stdio.h>
#include <string.h>
char names[20][20];
int grades[20];
int main()
{///���]��3�����
    FILE * fin = fopen( "file.txt", "r+" );
    char name[20];///�@�Ӧr�� (20�Ӧr��)
    int grade;///�@�Ӿ��
    for(int i=0; i<20; i++){
        fscanf(fin, "%s", name);///Ū�J�W�r
        fscanf(fin, "%d", &grade);///Ū�J����
        strcpy( names[i], name );
        grades[i] = grade;
    }

    ///FILE * fout = fopen("file.txt", "w+" );
    for(int i=0; i<20; i++){
        printf("%s %d\n", names[i], grades[i] );
        ///fprintf(fout, "%s %d\n", names[i], grades[i] );
    }

}

