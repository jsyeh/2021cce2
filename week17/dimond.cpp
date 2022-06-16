///菱形怎麼做出來
#include <stdio.h>
int main()
{
    int N=5;
    for(int i=1; i<=N; i++){
        int star=i*2-1, space=N-i;

        for(int k=0; k<space; k++) printf(" ");
        for(int k=0; k<star ; k++) printf("*");

        printf("\n");
    }
    for(int i=N-1; i>=0; i--){
        int star=i*2-1, space=N-i;

        for(int k=0; k<space; k++) printf(" ");
        for(int k=0; k<star ; k++) printf("*");

        printf("\n");
    }
}
///     空格有幾個? *有幾個
///printf("    *\n");    //i:1 star:1  i*2-1  (乘2再加減1,湊答案)
///printf("   ***\n");   //i:2 star:3  i*2-1
///printf("  *****\n");  //i:3 star:5  i*2-1
///printf(" *******\n"); //i:4 star:7  i*2-1
///printf("*********\n");//i:5 推算 space:0 是 n-i
