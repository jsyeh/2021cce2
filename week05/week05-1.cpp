///week05-1.cpp step01-1 selection sort
///���Ѫ��D�D�O�Ƨ�,�Ѯv���ƲߤW�g��selection sort��ܱƧǪk,�|�Ψ쪺�ޥ���(1)�}�C�ŧi�B�}�C��l��,(2)�̫��for�j��L�X�Ʀn������,(3)����i,�k��j,�䤤 �k�⪺ for(int j=i+1 �e���X��, (4) if(a[i]>a[j]) �j�p����N�洫�C
#include <stdio.h> ///�Ƨ�
int a[10]={7,8,9, 1,2,3, 6,5,4, 0};
int main()
{
    for(int i=0; i<10; i++){///����i
        for(int j=i+1; j<10; j++){///�k��j
            if( a[i] > a[j] ){///�j�p����,�N�洫
                int temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    for(int i=0; i<10; i++) printf("%d ", a[i] );

    return 0;
}
