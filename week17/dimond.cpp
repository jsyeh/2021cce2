///�٧Ϋ�򰵥X��
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
///     �Ů榳�X��? *���X��
///printf("    *\n");    //i:1 star:1  i*2-1  (��2�A�[��1,�굪��)
///printf("   ***\n");   //i:2 star:3  i*2-1
///printf("  *****\n");  //i:3 star:5  i*2-1
///printf(" *******\n"); //i:4 star:7  i*2-1
///printf("*********\n");//i:5 ���� space:0 �O n-i
