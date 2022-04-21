///Week09-1.cpp step01-1 bubble sort 簡化 大到小
#include <stdio.h>
int grade[10]={9,8,1,2,3, 7,6,5,4,0};
int main()
{
    int N=10;
    for(int k=0; k<10; k++){///跑很多次,但是到底要幾次?
        for(int i=0; i<N-1; i++){
            if( grade[i] < grade[i+1] ){ ///反了
                int temp=grade[i];
                grade[i]=grade[i+1];
                grade[i+1]=temp;
            }
        }
        for(int i=0; i<N; i++) printf("%d ", grade[i] );
        printf("\n");
    }
}

