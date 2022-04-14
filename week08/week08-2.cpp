///Week08-2.cpp step02-2 檔案
#include <stdio.h>
int grades[3];///step02-2陣列
int main()
{///假設有3筆資料
    int grade;
    for(int i=0; i<3; i++){
        scanf("%d", &grade);
        grades[i] = grade;
    }

    for(int i=0; i<3; i++){
        printf("%d\n", grades[i] );
    }

}
