///Week12-3.cpp step02-1
///改用 C++ 的 class and std::cin   std::cout
///在這個範例,練習 C++ 的 Input 及 Output 方法
#include <iostream>
class Student{
public:
	char name[30];
	int grade;
};

Student stu[100];
int main()
{
	int N;
	std::cin >> N;
	for(int i=0; i<N; i++){
		std::cin >> stu[i].name;
		std::cin >> stu[i].grade;
	}
	std::
	for(int i=0; i<N; i++){
		std::cout << stu[i].name << " ";
		std::cout << stu[i].grade << std::endl ;
	}                                  ///end line

	return 0;
}
