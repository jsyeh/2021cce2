///week05-1.cpp step01-1 selection sort
///今天的主題是排序,老師先複習上週的selection sort選擇排序法,會用到的技巧有(1)陣列宣告、陣列初始值,(2)最後用for迴圈印出排好的答案,(3)左手i,右手j,其中 右手的 for(int j=i+1 容易出錯, (4) if(a[i]>a[j]) 大小不對就交換。
#include <stdio.h> ///排序
int a[10]={7,8,9, 1,2,3, 6,5,4, 0};
int main()
{
    for(int i=0; i<10; i++){///左手i
        for(int j=i+1; j<10; j++){///右手j
            if( a[i] > a[j] ){///大小不對,就交換
                int temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    for(int i=0; i<10; i++) printf("%d ", a[i] );

    return 0;
}
