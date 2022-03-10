///Week03-4.cpp step03-1_今天的主題是 Tell me the frequencies 告訴我出現的頻率。
///我們先解決車廂「掛勾」的問題。
///第一個火車頭不用掛勾,後面的每個車廂前面都要有個掛勾。
///第2個要解決的問題是「讀入一整行」使用新的指令 while( gets(line) ) 來讀,便能成功
#include <stdio.h>
char line[2000];
int main()
{
	int t=1;///Step01:第1個火車頭,不加掛勾
	while( gets(line) ){//不能用scanf(),改用!!!
		///Step02: gets(line)可讀入一整行!!!!


		if(t>1)	printf("\n"); //Step01:車廂前有掛勾
		printf("第%d筆資料\n", t);//車廂

		t++;
	}
}
