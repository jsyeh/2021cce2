///Week03-4.cpp step03-1_���Ѫ��D�D�O Tell me the frequencies �i�D�ڥX�{���W�v�C
///�ڭ̥��ѨM���[�u���ġv�����D�C
///�Ĥ@�Ӥ����Y���α���,�᭱���C�Ө��[�e�����n���ӱ��ġC
///��2�ӭn�ѨM�����D�O�uŪ�J�@���v�ϥηs�����O while( gets(line) ) ��Ū,�K�ন�\
#include <stdio.h>
char line[2000];
int main()
{
	int t=1;///Step01:��1�Ӥ����Y,���[����
	while( gets(line) ){//�����scanf(),���!!!
		///Step02: gets(line)�iŪ�J�@���!!!!


		if(t>1)	printf("\n"); //Step01:���[�e������
		printf("��%d�����\n", t);//���[

		t++;
	}
}
