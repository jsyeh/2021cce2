///Week11-4.cpp step02-3
/// C++ STL 存資料!!!
#include <stdio.h>
#include <string.h>
///#include <vector>
#include <map> ///std::map<左邊, 右邊>
#include <string> ///沒有 .h 哦
char line[100];
int main()
{
    int T;
    FILE * fin = fopen("input.txt", "r");
    fscanf(fin, "%d", &T);///讀檔
    ///std::map< 字串, 整數 > 可以把字串,map對應成ans
    std::map< std::string, int > table;

    while( fgets(line, 100, fin) ){
        line[ strlen(line)-1 ] = 0;  ///做處理,刪掉最後的跳行
        printf("讀到了= %s =\n", line );
        table[ line ] ++;
    }
    for( const auto &tree : table ){
        printf("%s %d\n", tree.first.c_str(), tree.second );
    }

}
