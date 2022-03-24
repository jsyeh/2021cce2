///Week05-2.cpp step02-1 bubble sort
#include <stdio.h> ///泡泡排序
int a[10]={7,8,9, 1,2,3, 6,5,4, 0};
int main()
{
    for(int k=0; k<10-1; k++){///9次, 9x9得到81次
        for(int i=0; i<10-1; i++){///9次
            if( a[i] > a[i+1] ){///大小不對,就交換
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

