///Week12-4.cpp step02-2
///使用 using namespace std 來簡化程式裡的 std::
#include <iostream>
using namespace std;
class Student{
public:
	char name[30];
	int grade;
};
Student stu[100];
int main()
{
	int N;
	cin >> N;
	for(int i=0; i<N; i++){
		cin >> stu[i].name;
		cin >> stu[i].grade;
	}///std裡面的cin

	for(int i=0; i<N; i++){
		cout << stu[i].name << " ";
		cout << stu[i].grade << endl ;
	}                                  ///end line
	return 0;
}
