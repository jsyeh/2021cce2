///Week08-6.cpp step03-4 讀入 Input 檔案
#include <stdio.h>
#include <string.h>
char names[20][20];
int grades[20];
int main()
{///假設有3筆資料
    FILE * fin = fopen( "file.txt", "r+" );
    char name[20];///一個字串 (20個字母)
    int grade;///一個整數
    for(int i=0; i<20; i++){
        fscanf(fin, "%s", name);///讀入名字
        fscanf(fin, "%d", &grade);///讀入分數
        strcpy( names[i], name );
        grades[i] = grade;
    }

    ///FILE * fout = fopen("file.txt", "w+" );
    for(int i=0; i<20; i++){
        printf("%s %d\n", names[i], grades[i] );
        ///fprintf(fout, "%s %d\n", names[i], grades[i] );
    }

}

