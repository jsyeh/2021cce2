///Week11-3.cpp step02-2
/// C++ STL �s���!!! �A�� for�j��L�X��
#include <stdio.h>
#include <string.h>
///#include <vector>
#include <map> ///std::map<����, �k��>
#include <string> ///�S�� .h �@
char line[100];
int main()
{
    int T;
    FILE * fin = fopen("input.txt", "r");
    fscanf(fin, "%d", &T);///Ū��
    ///std::map< �r��, ��� > �i�H��r��,map������ans
    std::map< std::string, int > table;

    while( fgets(line, 100, fin) ){
        line[ strlen(line)-1 ] = 0;  ///���B�z,�R���̫᪺����
        printf("Ū��F= %s =\n", line );
        table[ line ] ++;
    }

}
