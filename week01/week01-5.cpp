///week01-5.cpp
///step03-1 "�`�@���X��2" �ΰj��C
///�j�馳 for(���D����) �� while(���T�w���׮�,��while)
#include <stdio.h>
#include <string.h> // ���F strlen() �r����ת��禡
char line[2000]; //�ŧi�b�~��,�ܰ��b!!!

int main()
{

	int sum=0;//�j��e�� �`�X=0
	while ( scanf("%s", line) == 1 ){ //�p�G���\Ū��1��
	//for(int k=0; k<4; k++){
		//scanf("%s", line);
		int N = strlen(line); //�o��r�����
		int ans=0;
		for(int i=0; i< N ; i++){
			if( line[i] == '2' ) ans++;
		}
		printf("%d\n", ans);
		sum += ans;
	}
	printf("Total: %d\n", sum);
	return 0;
}
