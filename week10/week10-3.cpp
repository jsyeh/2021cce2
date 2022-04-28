///Week10-3.cpp step02-2 小心,要用 .cpp 副檔名
///(1)讀檔案 (2)要做排序 (3) 要用 C++ class 物件
#include <stdio.h>
class Student { ///(大寫)學生 裡面有
public: ///公開給別人用,所以 main()可以存取到裡面的資料
    char name[30];///名字(30字母)
    int grade;///分數
};
Student student[100];///(大寫)Student student[100];//有100個student
int main()
{
    FILE * fin = fopen("input.txt", "r");
    int N;
    fscanf( fin, "%d", &N );
    for(int i=0; i<N; i++){
        fscanf( fin, "%s %d", student[i].name, &student[i].grade );
    }
    for(int k=0; k<N-1; k++){
        for(int i=0; i<N-1; i++){
            if( student[i].grade < student[i+1].grade ){
                Student temp = student[i];
                student[i] = student[i+1];
                student[i+1] = temp;
            }
        }
    }
    for(int i=0; i<N; i++){
        printf("%s %d\n", student[i].name, student[i].grade );
    }
}
