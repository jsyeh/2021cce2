///week01-4.cpp
///step02-2 �b�ƨg�{�]-��01�g,�N��誺�{����g,��Ū�J�ܦh��
///�C�⤣��, �]���O Python�C
///�sĶ��compiler �ڭ̧令C/CPP
#include <stdio.h>
#include <string.h> // ���F strlen() �r����ת��禡
char line[2000]; //�ŧi�b�~��,�ܰ��b!!!

int main()
{

	while ( scanf("%s", line) == 1 ){
	//for(int k=0; k<4; k++){
		//scanf("%s", line);
		int N = strlen(line); //�o��r�����
		int ans=0;
		for(int i=0; i< N ; i++){
			if( line[i] == '2' ) ans++;
		}
		printf("%d\n", ans);
	}
	return 0;
}
