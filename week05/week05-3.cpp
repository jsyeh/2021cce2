///Week05-3.cpp ���,�p�G�}�C���j�p�O10�U
///��10�U�ӼƦr�n�Ƨ�.... �n�]�X��?
#include <stdio.h>
#include <stdlib.h>///qsort()�ݭn��
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
    for(int k=0; k<100000-1; k++){///99999��, 99999x99999�o���10000000000��
        for(int i=0; i<100000-1; i++){///99999��
            if( a[i] > a[i+1] ){///�j�p����,�N�洫
                int temp=a[i];
                a[i]=a[i+1];
                a[i+1]=temp;
            }
        }
        for(int i=0; i<10; i++) printf("%d ", a[i] );
        printf("\n");
    }*/
