///Week09-2.cpp step02-1 bubble sort ²�� �j��p
///�p�G���ӴN�֭n�Ʀn�F.... �i�H���������@!!!!
#include <stdio.h>
int grade[10]={9,8,1,2,3, 7,6,5,4,0};
int main()
{
    int N=10;
    for(int k=0; k<10; k++){///�]�ܦh��,���O�쩳�n�X��?
        int change=0;///�S���ק�
        for(int i=0; i<N-1; i++){
            if( grade[i] < grade[i+1] ){ ///�ϤF
                int temp=grade[i];
                grade[i]=grade[i+1];
                grade[i+1]=temp;
                change++;///���@�ӭק�
            }
        }
        if(change==0) break;///�S���ק�,�N�n�F,�i�H�^�a�F
        for(int i=0; i<N; i++) printf("%d ", grade[i] );
        printf("\n");
    }
}

