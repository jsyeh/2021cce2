///Week04-0.cpp ���Ѫ��Ҹ��D��
///�ڭ̷Q�n�ѨM�ƨg�{�]��,Tell me the frequencies
///���� Input �Q�� while( gets(line) ) �ѨM
///�A�� Output ������, �Q�Τ����Y +���[ +���[ +���[

#include <stdio.h>
char line[2000];
int main()
{
	int t=1;
	while( gets(line) ){
		if(t>1) printf("\n");
		printf("Test Case %d\n", t);
		t++;
	}
	return 0;
}
