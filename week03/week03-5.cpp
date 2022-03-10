///Week03-5.cpp step03-2_最後要統計字母出現的次數
///我們使用的方法,是用 int ans[256]這個陣列。
///迴圈前面,把 ans[c]清為0, 迴圈中間 ans[c]++, 迴圈後面把 ans[c]印出來。快要成功囉, 下週繼續
#include <stdio.h>
char line[2000];
//Step05:要小心,ans[c]會殘留之前的數字,所以要清空!!!
int ans[256];//Step03: 用來數有幾個!!!!
//ans['A'] 對應 'A'出現幾次

int main()
{
	int t=1;//Step01:第1個火車頭,不加掛勾
	while( gets(line) ){//不能用scanf(),改用!!!
		//Step02: gets(line)可讀入一整行!!!!
		if(t>1)	printf("\n"); //Step01:車廂前有掛勾

		for(int c=32; c<128; c++){
			ans[c]=0;
		}///迴圈前面 ans[c]清為0
		for(int i=0; line[i]!=0; i++){//Step04:字串迴圈
			char c = line[i];
			ans[c]++;//Step03數有幾個c,
		}///迴圈裡面ans[c]++
        ///迴圈後面把 ans[c] 印出來。這裡之後要再修改
		for(int c=32; c<128; c++){
			if(ans[c]>0) printf("%d %d\n", c, ans[c]);
		}
		//printf("第%d筆資料\n", t);//車廂

		t++;
	}
}
