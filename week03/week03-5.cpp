///Week03-5.cpp step03-2_�̫�n�έp�r���X�{������
///�ڭ̨ϥΪ���k,�O�� int ans[256]�o�Ӱ}�C�C
///�j��e��,�� ans[c]�M��0, �j�餤�� ans[c]++, �j��᭱�� ans[c]�L�X�ӡC�֭n���\�o, �U�g�~��
#include <stdio.h>
char line[2000];
//Step05:�n�p��,ans[c]�|�ݯd���e���Ʀr,�ҥH�n�M��!!!
int ans[256];//Step03: �ΨӼƦ��X��!!!!
//ans['A'] ���� 'A'�X�{�X��

int main()
{
	int t=1;//Step01:��1�Ӥ����Y,���[����
	while( gets(line) ){//�����scanf(),���!!!
		//Step02: gets(line)�iŪ�J�@���!!!!
		if(t>1)	printf("\n"); //Step01:���[�e������

		for(int c=32; c<128; c++){
			ans[c]=0;
		}///�j��e�� ans[c]�M��0
		for(int i=0; line[i]!=0; i++){//Step04:�r��j��
			char c = line[i];
			ans[c]++;//Step03�Ʀ��X��c,
		}///�j��̭�ans[c]++
        ///�j��᭱�� ans[c] �L�X�ӡC�o�̤���n�A�ק�
		for(int c=32; c<128; c++){
			if(ans[c]>0) printf("%d %d\n", c, ans[c]);
		}
		//printf("��%d�����\n", t);//���[

		t++;
	}
}
