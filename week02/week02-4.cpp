///Week02-4.cpp step03-2 �A�ѨM Palindrome �j���Y����٪�����
#include <stdio.h>
#include <string.h>
char line[200];
int palindrome()//�j��
{
	int N = strlen(line);
	for(int i=0; i<N; i++){
		if( line[i] != line[N-1-i] ) return 0;//bad
	} //�u�n�������Y�����ۦP,bad return 0
	return 1;//good!! �������ۦP
}
int main()
{
	while( scanf("%s", line)==1 ){
		int p=palindrome();//0���O, 1�O
		if( p==1 ) printf("%s -- is a regular palindrome.\n\n", line);
		if( p==0 ) printf("%s -- is not a palindrome.\n\n", line);
	}
}
