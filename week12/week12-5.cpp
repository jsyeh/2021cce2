///Week12-5.cpp step02-3
/// C++ STL 存檔時一定要 .cpp
#include <iostream> ///為了 cout
#include <vector>
using namespace std;

int main()
{
    vector<int> v;///沒說有多大,就0格

    v.push_back(10); ///加大1格, 放入10
    v.push_back(20); ///加大1格, 放入20
    v.push_back(30); ///加大1格, 放入30
    ///所以現在有3個
    for(int i=0; i<3; i++){
        cout << v[i];
        cout << endl;
    }
}
