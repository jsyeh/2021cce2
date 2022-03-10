///week01-3.cpp step02-1 讀入1字串 char line[2000]; 
///要配合 for迴圈 if判斷!
#include <stdio.h>
char line[2000]; ///很長
int main()
{
    scanf("%s",  line);
    for(int i=0; i<2000; i++){
        if( line[i] == '2' ) printf("找到2\n");
    }
    return 0;
}
