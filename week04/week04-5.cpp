///Week04-5.cpp step03-3 (�]�����q, �U�g�A��)
///�ϥθ�Ƶ��c, �t�X sort�Ƨ�, �ӧ�������
#include <stdio.h>
char line[2000];
struct DATA{
	char c;
	int ans;
} lists[128];
int main()
{
	int t=1;
	while( gets(line) ){
		if(t>1) printf("\n");

		int ans[256]={};//���
		for(int i=0; line[i]!=0; i++){
			char c = line[i];
			ans[c]++;//�r���X�{1��
		}//�r�ꪺ�j��,�o��C�@�Ӧr��

		for(int i=0; i<128; i++){
			lists[i].c=i;
			lists[i].ans=ans[i];
		}//���⵪�ק۶i lists[i]�̭�

		for(int i=0; i<128; i++){
			for(int j=i+1; j<128; j++){
				if(lists[i].ans>lists[j].ans || (lists[i].ans==lists[j].ans && lists[i].c<lists[j].c) ){
					struct DATA temp = lists[i];
					lists[i]=lists[j];
					lists[j]=temp;
				}
			}
		}

		for(int i=0; i<128; i++){
			if(lists[i].ans>0) printf("%d %d\n", lists[i].c, lists[i].ans );
		}

		t++;
	}
	return 0;
}
