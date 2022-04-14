///Week08-3.cpp step03-1 檔案
#include <stdio.h>
#include <string.h>
char names[3][20];///3名字, 每個名字最多20字母
int grades[3];///step02-2陣列
int main()
{///假設有3筆資料
    char name[20];///一個字串 (20個字母)
    int grade;///一個整數
    for(int i=0; i<3; i++){
        scanf("%s", name);///讀入名字
        scanf("%d", &grade);///讀入分數
        strcpy( names[i], name );///把名字, 複製到 names[i]陣列
        grades[i] = grade; ///把分數,進入 grades[i]陣列
    }

    for(int i=0; i<3; i++){
        printf("%s 得到 %d\n", names[i], grades[i] );
    }

}
