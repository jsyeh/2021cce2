///Week02-4.cpp step03-2 再解決 Palindrome 迴文頭尾對稱的部分
#include <stdio.h>
#include <string.h>
char line[200];
int palindrome()//迴文
{
	int N = strlen(line);
	for(int i=0; i<N; i++){
		if( line[i] != line[N-1-i] ) return 0;//bad
	} //只要有任何頭尾不相同,bad return 0
	return 1;//good!! 全部都相同
}
int main()
{
	while( scanf("%s", line)==1 ){
		int p=palindrome();//0不是, 1是
		if( p==1 ) printf("%s -- is a regular palindrome.\n\n", line);
		if( p==0 ) printf("%s -- is not a palindrome.\n\n", line);
	}
}
