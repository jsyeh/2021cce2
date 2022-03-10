///week01-5.cpp
///step03-1 "總共有幾個2" 用迴圈。
///迴圈有 for(知道長度) 有 while(不確定長度時,用while)
#include <stdio.h>
#include <string.h> // 為了 strlen() 字串長度的函式
char line[2000]; //宣告在外面,很乾淨!!!

int main()
{

	int sum=0;//迴圈前面 總合=0
	while ( scanf("%s", line) == 1 ){ //如果成功讀到1個
	//for(int k=0; k<4; k++){
		//scanf("%s", line);
		int N = strlen(line); //得到字串長度
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
