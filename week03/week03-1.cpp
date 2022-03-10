///Week03-1.cpp 把上週的 week02-2 簡單迴文,在這裡寫出來
#include <stdio.h>
#include <string.h>
char line[2000];
int palindrome()
{
	int N = strlen(line);
	for(int i=0; i<N; i++){
		if( line[i]!=line[N-1-i] ) return 0;//bad
	}
	return 1;
}
int main()
{
	while( scanf("%s",line)==1 ){//不定長度,用while
		int p = palindrome();//0:bad, 1:good

		if(p==1) printf("%s -- is a regular palindrome.\n\n", line);
		if(p==0) printf("%s -- is not a palindrome.\n\n", line);
	}

	return 0;
}
