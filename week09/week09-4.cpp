///Week09-4.cpp step02-3 �b�ƨg�{�]��, ���u�n�Ƨǫܦh���C�Q�n�Ƨǧ�h���@!
///�ڭ̥���Input �� Output ��n�C���L�b�洫��, �ڭ̥u���@�ǨǦӤw, �U�@�Ӫ����n��i
#include <stdio.h>
char name[100][80];//�̦h100�����,�C��80�Ӧr��
int grade[100];//�̦h100�����,�C���Oint���
int main()
{
	int N;
	scanf("%d", &N);
	for(int i=0; i<N; i++){  //�����򦳥[ &
		scanf("%s %d", name[i], &grade[i] );
	}

	for(int k=0; k<N-1; k++){//�Ƨ��o!!!
		for(int i=0; i<N-1; i++){//���g�w�w�֤�
			if( grade[i] < grade[i+1] ){
				int temp=grade[i];//�洫
				grade[i]=grade[i+1];
				grade[i+1]=temp;
			}
		}
	}
	for(int i=0; i<N; i++){
		printf("%s %d\n", name[i], grade[i] );
	}
}
