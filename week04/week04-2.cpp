///Week04-2.cpp step02-1
///我們想要解決瘋狂程設裡,Tell me the frequencies
///先用今天考試的程式,解決Input/Output
///接下來, 便是利用字串的迴圈,來統計字母次數
///最後, 再依照字母順序, 倒著印出來
#include <stdio.h>
char line[2000];
int main()
{
	int t=1;
	while( gets(line) ){
		if(t>1) printf("\n");

		int ans[256]={};///賤招
		for(int i=0; line[i]!=0; i++){
			char c = line[i];
			ans[c]++;///字母出現 增加1次
		}///字串的迴圈,得到每一個字母
        for(int f=1; f<1000; f++){///頻率從小到大
            for(int c=128; c>=32; c--){///字母從大到小
                if(ans[c]==f) printf("%d %d\n", c, ans[c] );
            }
        }
		t++;
	}
	return 0;
}

