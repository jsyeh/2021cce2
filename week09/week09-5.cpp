///Week09-5.cpp step03-1 ��n�W�r�@�_�Ƨ�!!!
#include <stdio.h>
#include <string.h> //strcpy()
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

				char tempName[80]; //�r����洫? strcpy()
				strcpy( tempName, name[i] );
				strcpy( name[i], name[i+1] );
				strcpy( name[i+1], tempName );
			}
		}
	}
	for(int i=0; i<N; i++){
		printf("%s %d\n", name[i], grade[i] );
	}
}
