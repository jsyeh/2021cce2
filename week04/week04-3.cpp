///Week04-3.cpp step02-2
///我們想要解決瘋狂程設裡,Tell me the frequencies
///最後, 頻率從小到大(1到max), 再字母倒著印出來
#include <stdio.h>
char line[2000];
int main()
{
	int t=1;
	while( gets(line) ){
		if(t>1) printf("\n");

		int max=0;//一開始沒有頻率的max最大值
		int ans[256]={};///賤招
		for(int i=0; line[i]!=0; i++){
			char c = line[i];
			ans[c]++;///字母出現 增加1次
			if(ans[c]>max) max=ans[c];//更新max
		}///字串的迴圈,得到每一個字母

        for(int f=1; f<=max; f++){///頻率從小到大
            for(int c=128; c>=32; c--){///字母從大到小
                if(ans[c]==f) printf("%d %d\n", c, ans[c] );
            }
        }
		t++;
	}
	return 0;
}


