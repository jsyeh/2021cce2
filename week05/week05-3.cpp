///Week05-3.cpp 思考,如果陣列的大小是10萬
///有10萬個數字要排序.... 要跑幾次?
#include <stdio.h>
#include <stdlib.h>///qsort()需要它
int comp(const void *p1, const void *p2)
{
    int d1 = *(int*)p1,  d2 = *(int*)p2;
    if(d1>d2) return +1;
    if(d1<d2) return -1;
    if(d1==d2)* return 0;
}
int main()
{
    int a[100];

    for(int i=0; i<100; i++) printf("%d ", a[i]);
    printf("\n");

    qsort( a, 100, sizeof(int), comp);

    for(int i=0; i<100; i++) printf("%d ", a[i]);
    printf("\n");
}


/*
    for(int k=0; k<100000-1; k++){///99999次, 99999x99999得到約10000000000次
        for(int i=0; i<100000-1; i++){///99999次
            if( a[i] > a[i+1] ){///大小不對,就交換
                int temp=a[i];
                a[i]=a[i+1];
                a[i+1]=temp;
            }
        }
        for(int i=0; i<10; i++) printf("%d ", a[i] );
        printf("\n");
    }*/
