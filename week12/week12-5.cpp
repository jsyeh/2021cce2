///Week12-5.cpp step02-3
/// C++ STL �s�ɮɤ@�w�n .cpp
#include <iostream> ///���F cout
#include <vector>
using namespace std;

int main()
{
    vector<int> v;///�S�����h�j,�N0��

    v.push_back(10); ///�[�j1��, ��J10
    v.push_back(20); ///�[�j1��, ��J20
    v.push_back(30); ///�[�j1��, ��J30
    ///�ҥH�{�b��3��
    for(int i=0; i<3; i++){
        cout << v[i];
        cout << endl;
    }
}
