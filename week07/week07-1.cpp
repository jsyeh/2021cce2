///Week07-1.cpp 解決 UVA10420 List of Conquests
///step02-1 今天的主角,是Don Giovanni這個情聖,到底喜歡多少女生。
///我們先利用瘋狂程設,把 UVA 10420 List of Conquests 的 Input 搞定。
/// Input
#include <stdio.h>
char line[2000][80];///和今天考試一樣
int main()
{
	int N;
	scanf("%d\n", &N);///這後面有個跳行哦

	for(int i=0; i<N; i++){
		gets( line[i] ); ///遇到空格,scanf()會被斷開。要改用 gets()
	}


	for(int i=0; i<N; i++){
		printf("%s\n", line[i]);
	}
	return 0;
}
