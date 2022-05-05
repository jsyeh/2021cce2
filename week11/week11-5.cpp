#pragma GCC diagnostic warning "-std=c++11"
#include <stdio.h>
#include <string>
#include <map>

char nation[2001][80];
int main()
{
	int N;
	scanf("%d", &N);

	std::map< std::string, int > table;// naiton name, to ans
	for(int i=0; i<N; i++){
		scanf("%s", nation[i] );

		table[ nation[i] ]  ++;

		char line[80];
		gets(line);
	}


	for( const auto & one : table ){
		printf("%s %d\n", one.first.c_str(), one.second);
	}

}
