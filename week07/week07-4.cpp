///Week07-4.cpp step03-1 �ݬO�_�ۦP: �ۦP�� combo++, ���ۦP�� �L�X���G
/// ���U�ӭn�έp�u�C�Ӱ�a���X�ӡv, �ڭ̤�W�� line[i] �O�@��Ʀn����a�W�C
///�i�H�W�U2����,�ۦP��,�N ++, ���ۦP��,�N�L�X���ת��ƶq�C
///�W�g�b Hardwood Species ���ιL�o�ӧޥ��C
///���ѦA�h���@�ӯS�O���ץ�,����2000��,�ܦ�2001���C
///��̫�@������B���s�b���U�@��,�Q�� line[N][0]=0 �⨺�Ӥ��s�b���r��]���Ū��r��C�o�˵{���N�i�H��²�檺�j��B�@
#include <stdio.h>
#include <stdlib.h> //qsort()
#include <string.h> //strcmp()
char line[2001][80];//�M���ѦҸդ@��
int compare( const void *p1, const void *p2 )
{
	return strcmp( (char*)p1, (char*)p2 );
}
int main()
{
	int N;
	scanf("%d\n", &N);

	for(int i=0; i<N; i++){
		scanf("%s", line[i] ); //���䪺��a�W
		char others[80];//�ѤU��
		gets( others );//�k�������Ū��
	}

	qsort( line, N, 80, compare );

	line[N][0]=0;//�̫᦬�����h�X�Ӫ����, ex.N=2000, line[N]��2001��
	int combo=1;
	for(int i=0; i<N; i++){
		if( strcmp( line[i], line[i+1] ) == 0 ){ //�ۦP
			combo++;
		}else{
			printf("%s %d\n", line[i], combo );
		}
	}
	return 0;
}
