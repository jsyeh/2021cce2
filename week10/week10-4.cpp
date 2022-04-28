///Week10-4.cpp step02-3 小心,要用 .cpp 副檔名
///(1)讀檔案 (2)要做排序 (3) 要用 C++ class 物件, (4) std::sort
#include <stdio.h>
#include <vector> ///付出的代價 std::vector<Student>
#include <algorithm> ///付出的代價 std::sort() 直接排序,帥!
class Student { ///(大寫)學生 裡面有
public: ///公開給別人用,所以 main()可以存取到裡面的資料
    char name[30];///名字(30字母)
    int grade;///分數
};
///Student student[100];///(大寫)Student student[100];//有100個student
bool compare( Student a, Student b ){
    return (a.grade > b.grade) ;
}
int main()
{
    FILE * fin = fopen("input.txt", "r");
    int N;
    fscanf( fin, "%d", &N );

    std::vector<Student> student(20);
    for(int i=0; i<N; i++){
        fscanf( fin, "%s %d", student[i].name, &student[i].grade );
    }

    std::sort( student.begin(), student.end(), compare );

    for(int i=0; i<N; i++){
        printf("%s %d\n", student[i].name, student[i].grade );
    }
}
