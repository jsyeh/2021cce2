///Week07-1.cpp �ѨM UVA10420 List of Conquests
///step02-1 ���Ѫ��D��,�ODon Giovanni�o�ӱ��t,�쩳���w�h�֤k�͡C
///�ڭ̥��Q�κƨg�{�],�� UVA 10420 List of Conquests �� Input �d�w�C
/// Input
#include <stdio.h>
char line[2000][80];///�M���ѦҸդ@��
int main()
{
	int N;
	scanf("%d\n", &N);///�o�᭱���Ӹ���@

	for(int i=0; i<N; i++){
		gets( line[i] ); ///�J��Ů�,scanf()�|�Q�_�}�C�n��� gets()
	}


	for(int i=0; i<N; i++){
		printf("%s\n", line[i]);
	}
	return 0;
}
