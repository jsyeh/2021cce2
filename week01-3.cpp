///week01-3.cpp step02-1 Ū�J1�r�� char line[2000];
///�n�t�X for�j�� if�P�_!
#include <stdio.h>
char line[2000]; ///�ܪ�
int main()
{
    scanf("%s",  line);
    for(int i=0; i<2000; i++){
        if( line[i] == '2' ) printf("���2\n");
    }
    return 0;
}
