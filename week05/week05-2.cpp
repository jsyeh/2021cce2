///Week05-2.cpp step02-1 bubble sort
#include <stdio.h> ///�w�w�Ƨ�
int a[10]={7,8,9, 1,2,3, 6,5,4, 0};
int main()
{
    for(int k=0; k<10-1; k++){///9��, 9x9�o��81��
        for(int i=0; i<10-1; i++){///9��
            if( a[i] > a[i+1] ){///�j�p����,�N�洫
                int temp=a[i];
                a[i]=a[i+1];
                a[i+1]=temp;
            }
        }
        for(int i=0; i<10; i++) printf("%d ", a[i] );
        printf("\n");
    }

    return 0;
}

