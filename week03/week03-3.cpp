///Week03-3.cpp ��W�g�� week02-7 ���D�j��,�b�o�̼g�X��
#include <stdio.h>
#include <string.h>
char line[2000];
char tableA[]="ABCDEFGHIJKLMNOPQRSTUVWXYZ123456789";
char tableB[]="A   3  HIL JM O   2TUVWXY51SE Z  8 ";
char mirror_char( char c ) //�@���蹳�r��
{
	for(int i=0; tableA[i]!=0; i++){
		if( c == tableA[i] ) return tableB[i];
	}
	return ' ';//���S�ۦP
}
int mirror() //�j���蹳�r
{
	int N = strlen(line);
	for(int i=0; i<N; i++){
		if( mirror_char(line[i]) != line[N-1-i] ) return 0;//bad
	}
	return 1;
}
int palindrome() //²��j��
{
	int N = strlen(line);
	for(int i=0; i<N; i++){
		if( line[i]!=line[N-1-i] ) return 0;//bad
	}
	return 1;
}
int main()
{
	while( scanf("%s",line)==1 ){//���w����,��while
		int p = palindrome();//0:bad, 1:good
        int m = mirror();
        if( p==1 && m==1 ) printf("%s -- is a mirrored palindrome.\n\n", line);
		if( p==1 && m==0 ) printf("%s -- is a regular palindrome.\n\n", line);
		if( p==0 && m==1 ) printf("%s -- is a mirrored string.\n\n", line);
		if( p==0 && m==0 ) printf("%s -- is not a palindrome.\n\n", line);
	}

	return 0;
}
