///Week04-2.cpp step02-1
///�ڭ̷Q�n�ѨM�ƨg�{�]��,Tell me the frequencies
///���Τ��ѦҸժ��{��,�ѨMInput/Output
///���U��, �K�O�Q�Φr�ꪺ�j��,�Ӳέp�r������
///�̫�, �A�̷Ӧr������, �˵ۦL�X��
#include <stdio.h>
char line[2000];
int main()
{
	int t=1;
	while( gets(line) ){
		if(t>1) printf("\n");

		int ans[256]={};///���
		for(int i=0; line[i]!=0; i++){
			char c = line[i];
			ans[c]++;///�r���X�{ �W�[1��
		}///�r�ꪺ�j��,�o��C�@�Ӧr��
        for(int f=1; f<1000; f++){///�W�v�q�p��j
            for(int c=128; c>=32; c--){///�r���q�j��p
                if(ans[c]==f) printf("%d %d\n", c, ans[c] );
            }
        }
		t++;
	}
	return 0;
}

