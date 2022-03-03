///week02-1.cpp Step02-1 對照表 Input: 一個字母, Output: 另一個字母
#include <stdio.h>
char mirror( char c )
{///先用暴力法,暴力列出全部字母的鏡像字
    ///....你要自己寫 26行+10行,把程式全部寫出來D
    if( c=='A' ) return 'A';
    if( c=='B' ) return ' ';
    if( c=='C' ) return ' ';
    if( c=='D' ) return ' ';
    if( c=='E' ) return '3';
    if( c=='F' ) return ' ';
    if( c=='G' ) return ' ';
    if( c=='H' ) return 'H';
    if( c=='I' ) return 'I';
    if( c=='J' ) return 'L';
    if( c=='K' ) return ' ';
    if( c=='L' ) return 'J';
    if( c=='M' ) return 'M';
    if( c=='N' ) return ' ';
    if( c=='O' ) return 'O';
    if( c=='P' ) return ' ';
    if( c=='Q' ) return ' ';
    if( c=='R' ) return ' ';
    if( c=='S' ) return '2';
    if( c=='T' ) return 'T';
    if( c=='U' ) return 'U';
    if( c=='V' ) return 'V';
    if( c=='W' ) return 'W';
    if( c=='X' ) return 'X';
    if( c=='Y' ) return 'Y';
    if( c=='Z' ) return '5';
    if( c=='1' ) return '1';
    if( c=='2' ) return 'S';
    if( c=='3' ) return 'E';
    if( c=='4' ) return ' ';
    if( c=='5' ) return 'Z';
    if( c=='6' ) return ' ';
    if( c=='7' ) return ' ';
    if( c=='8' ) return '8';
    if( c=='9' ) return ' ';
    return ' ';///都沒有對到,就空的
}
int main()
{
    char c;
    scanf("%c", &c);

    char ans = mirror(c); ///鏡子的函數
    printf("它的鏡像字是--%c--\n", ans );
    return 0;
}

