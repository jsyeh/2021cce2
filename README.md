# 2021cce2
資傳一乙程式設計二（2022春）

授課教師：銘傳大學葉正聖

教學的範圍是精簡後的C/C++部分，希望用簡單的內容、逐序漸進的教學，讓大家喜歡寫程式，並建立程式設計的基礎。利用螺旋式的教法（Spirial Teaching Method）慢慢增加工具，每週上課3小時，利用5-6個小的課堂作業，逐步建立輔助學習的鷹架，每次增加3-5行程式方便理解。配合瘋狂程設的練習，讓大家能自己在練習中熟悉程式設計。

上學期（程式設計一）先教C語言的簡單程式設計的內容，語法包含int main()主函式、Standard Input/Output標準輸入輸出、變數、運算、if(判斷)、for(迴圈)、陣列、函式、字串。下學期（程式設計二）將教剩下的語法，包含結構、指標、檔案等。除了C/C++共通的部分，下學期還會多一點C++的部分，包含cin/cout，Standard Template Library等。

使用的工具有：CodeBlocks 17.12 MinGW，瘋狂程設，GitHub

## 每週上課內容
- 最多2的一天
- 迴文與鏡像文
- 跳跳馬利歐

# Week01 第01週上課內容
程式設計二 Week01 2022-02-24
0. What學什麼? Why為何學? How如何學?
1. 主題: 史上最多2的一天 (最有愛的日子)
2. 複習: scanf()讀入整數、字元、字串
3. 複習: if(判斷) for(迴圈) 配合陣列
4. 複習: 字串函式
5. 實作: 最多2的一天 (下週考試)
6. 進階: UVA401 Palindromes (上學期的迴文)

## 任務0
本學期將使用 新版瘋狂程設-mcu02圓山碼場，原因是因為銘傳大學一學期開設50-60個班的程式設計，所以分流成5台主機，資傳系使用的主機是 mcu02。
0. Chrome登入 mcu02.arping.me, 加選課程 16102 資傳一乙
1. 下載軟體,解壓縮!!! (沒有zip拉鏈) 點擊 小黑 (會跳出軟體)
2. 登入軟體(圓山碼場)

## 任務1
step01-1 讀入1整數 int a; 再印出來, 截圖上傳。

「最多2的一天」，是因為本週 2022-02-22 出現很多2，網路上有許多人分享很多2的照片。
今天的主題目標，是想要判斷 Input 裡，到底出現幾個 '2'。但是經過一個寒假，大家可能忘了如何寫程式。所以老師先利用 CodeBlocks 讓大家熟悉：如何寫一個程式，可以讀入整數，印出整數。在過程中，便能熟悉、回憶如何寫程式。

```C++
/// week01-1.cpp step01-1 scanf()讀資料
///CodeBlocks: File-New-Empty 另存新檔
#include <stdio.h>
int main()
{
    int a;
    printf("使用者輸入一個數值: ");
    scanf("%d", &a); ///讓使用者輸入一個數值
    printf("你讀到了 %d\n", a);

    return 0;
}
```

## 任務2
2. step01-2 讀入1字母 char c; 再印出來, 截圖上傳。

剛剛複習「寫出最簡單的程式範例」，可以讀入整數a、印出整數a。接下來要改寫成字母/字元，程式碼有90%相同。讓同學輕輕鬆鬆建立信心。

```C++
/// week01-2.cpp step01-2 scanf()讀 字元、字串
///CodeBlocks: File-New-Empty 另存新檔
#include <stdio.h>
int main()
{
///    int a;
///    printf("使用者輸入一個數值: ");
///    scanf("%d", &a); ///讓使用者輸入一個數值
///    printf("你讀到了 %d\n", a );
    char c;
    printf("請輸入一堆字: ");
    scanf("%c", &c); ///讀到第1個字母
    printf("你讀到了 %c\n", c );

    return 0;
}
```

## 任務3
3. step02-1 讀入1字串 `char line[2000];` 要配合 for迴圈 if判斷! 截圖上傳。

今天的第1個小時比較輕鬆，但在第2小時，要開始變複雜了。首先要改用字元陣列（字串）來讀入資料。接下來是使用 for迴圈，配合 if判斷，每次找到一個 `'2'` 就印出來。
為了簡化程式的理解，for迴圈故意使用 `for(int i=0; i<2000; i++)` 其實是不恰當的，因為檢測到「讀入字串」之外殘留的地方。比較好的方式，應該是要利用 字串長度做範圍（如任務4所示），或使用上學期教過的 `for(int i=0; line[i]!=0; i++)`。不過因為第1週上課，刻意想教得簡單一點，所以直接拿陣列長度 2000 來當for迴圈的範圍。剛好 char line[2000]是在外面宣告的 global 變數，會被清為0，所以平安沒事。

```C++
///week01-3.cpp step02-1 讀入1字串 char line[2000]; 
///要配合 for迴圈 if判斷!
#include <stdio.h>
char line[2000]; ///很長
int main()
{
    scanf("%s",  line);
    for(int i=0; i<2000; i++){
        if( line[i] == '2' ) printf("找到2\n");
    }
    return 0;
}
```

## 任務4
4. step02-2 在瘋狂程設-第01週,將剛剛的程式改寫,能讀入很多行。而且再利用字串函式 strlen() 可以得到字長的長度 int N=strlen(line) 之後便能讓 迴圈變成 for(int i=0; i<N; i++) 逐一針對有效的字母做比較。利用練習模式, 截圖上傳。

```C++
///week01-4.cpp
///step02-2 在瘋狂程設-第01週,將剛剛的程式改寫,能讀入很多行
///顏色不對, 因為是 Python。
///編譯器compiler 我們改成C/CPP
#include <stdio.h>
#include <string.h> // 為了 strlen() 字串長度的函式
char line[2000]; //宣告在外面,很乾淨!!!

int main()
{

	while ( scanf("%s", line) == 1 ){
	//for(int k=0; k<4; k++){
		//scanf("%s", line);
		int N = strlen(line); //得到字串長度
		int ans=0;
		for(int i=0; i< N ; i++){
			if( line[i] == '2' ) ans++;
		}
		printf("%d\n", ans);
	}
	return 0;
}
```

## 任務5
5. step03-1 承接上題, 在瘋狂程設裡, 把它寫完。其中需要 利用迴圈前面sum=0 迴圈中間 sum+=ans 迴圈後面把sum印出來。這個迴圈,是 while( scanf("%s", line)==1 ) 的這種神奇的迴圈, 以後會經常用到, 能讀入「不知道有幾筆資料」的神奇迴圈哦! 利用練習模式, 截圖上傳。

```C++
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
```

## 任務6
6. 上傳到GitHub雲端, 截圖上傳

將上課內容上傳GitHub

```
GitHub倉庫的網址, ex
https://github.com/jsyeh/2021cce2

0. 安裝 GitHub for Windows, 開 Git Bash
1. cd desktop
   git clone https://github.com/jsyeh/2021cce2
   把剛剛的倉庫 clone下載
把今天的程式 week01-1.cpp ... week01-5.cpp
也都放在這個目錄中
2. cd 2021cce2 進入我們的專案目錄 
   git status 看狀態,有5個紅色的,待加
   git add . 把它們加進倉庫的帳冊列管
   git status 看狀態 (變綠色)

3. 要 commit 它, BUT,之前要先設定email
   git config --global user.email "jsyeh@mail.mcu.edu.tw"
   git config --global user.name "jsyeh"

   git commit -m "你要加入的commit訊息"
   成功加入帳冊了,commit確認了!!!

4. 推送上雲端
   git push
```


# Week04
## step01-0
考試「Tell me the frequencies」的簡化版,只解決Input 及 Output, 老師在考前複習、考後講解同學出錯的地方.zip

```C++
///Week04-0.cpp 今天的考試題目
///我們想要解決瘋狂程設裡,Tell me the frequencies
///先把 Input 利用 while( gets(line) ) 解決
///再把 Output 的跳行, 利用火車頭 +車廂 +車廂 +車廂

#include <stdio.h>
char line[2000];
int main()
{
	int t=1;
	while( gets(line) ){
		if(t>1) printf("\n");
		printf("Test Case %d\n", t);
		t++;
	}
	return 0;
}

```

## step01-1
上週教完Tell me the frequencies這題,同學還沒有真的搞懂, 所以我們今天再重做一次。這次搭配別人的程式,我們一步步看程式碼從Input,Outpu搞定後, 現在利用字串的迴圈,把字母統計好。最後照著字母順序,從大到小印出來。.zip

```C++
///Week04-1.cpp step01-1
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

		int ans[256]={};//賤招
		for(int i=0; line[i]!=0; i++){
			char c = line[i];
			ans[c]++;//字母出現1次
		}//字串的迴圈,得到每一個字母

		for(int c=128; c>=32; c--){
			if(ans[c]!=0) printf("%d %d\n", c, ans[c] );
		}

		t++;
	}
	return 0;
}
```


## step02-1
最後,頻率從小郅大, 再字母從大到小倒著印,好像完成了

```C++
///Week04-2.cpp step02-1
///我們想要解決瘋狂程設裡,Tell me the frequencies
///最後, 頻率從小到大, 再字母倒著印出來,
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
```

## step02-2
使用1到1000的寫法其實有問題。可以更快。因此,蕭立人老師的影片, 是利用 max 出現頻率的最多次數,來當迴圈的上界.zip
```C++
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
```

## step03-1
想要把程式變得更快,我們想要排序完再印。不過要怎麼排序呢, 我們要先發明一個結構 struct DATA{char c; int ans;}; 是一組基礎的資料結構, 再用 struct DATA list1; 宣告1個, 或是 struct DATA lists[100]; 宣告100個。請利用CodeBlocks實作看看
```C++
///Week04-4.cpp step03-1 struct結構 (方便排序用)
#include <stdio.h>
struct DATA{
    char c;
    int ans;
}; ///我們發明一種資料結構,裡面有字母、ans出現次數

struct DATA list1;///一個資料結構的東西
struct DATA lists[100];///有100個資料結構的東西
int main()
{
    list1.c='A';
    list1.ans=1;

}
```

## step03-2
今天的主題是資料結構的struct結構,所以我們照著課本寫,並將利用sorting的方法來把今天的程式用更有效率的方法秀出來。不過因為停電,最後這個作業就不交了。

```C++
///Week04-5.cpp step03-3 (因為停電, 下週再續)
///使用資料結構, 配合 sort排序, 來完成任務
#include <stdio.h>
char line[2000];
struct DATA{
	char c;
	int ans;
} lists[128];
int main()
{
	int t=1;
	while( gets(line) ){
		if(t>1) printf("\n");

		int ans[256]={};//賤招
		for(int i=0; line[i]!=0; i++){
			char c = line[i];
			ans[c]++;//字母出現1次
		}//字串的迴圈,得到每一個字母

		for(int i=0; i<128; i++){
			lists[i].c=i;
			lists[i].ans=ans[i];
		}//先把答案抄進 lists[i]裡面
		
		for(int i=0; i<128; i++){
			for(int j=i+1; j<128; j++){
				if(lists[i].ans>lists[j].ans || (lists[i].ans==lists[j].ans && lists[i].c<lists[j].c) ){
					struct DATA temp = lists[i];
					lists[i]=lists[j];
					lists[j]=temp;
				}
			}
		}

		for(int i=0; i<128; i++){
			if(lists[i].ans>0) printf("%d %d\n", lists[i].c, lists[i].ans );
		}

		t++;
	}
	return 0;
}
```


# Week05

## step01-0
本週考試Tell me the frequencies,考試前複習、考試後示範容易出錯的地方
```C++
#include <stdio.h>
char line[2000];
int main()
{
	int t=1;//1火車頭 +2掛勾車廂 +3掛勾車廂
	while( gets(line) ){
		if(t>1) printf("\n");
		t++;
	}
	int ans[256]={};//初始值
	for(int i=0; line[i]!=0; i++){
		char c=line[i];
		ans[c]++;
	}

	for(int f=1; f<=1000; f++){//印東西時,頻率 1,2,...1000
		for(int c=128; c>=32; c--){//字母大...小
			if( ans[c]==f ) printf("%d %d\n", c, ans[c]);
		}
	}
	return 0;
}
```
小心,凡遇到括號的錯誤,忍住不要亂改,靜下來,看一下排版

## step01-1
今天的主題是排序,老師先複習上週的selection sort選擇排序法,會用到的技巧有(1)陣列宣告、陣列初始值,(2)最後用for迴圈印出排好的答案,(3)左手i,右手j,其中 右手的 for(int j=i+1 容易出錯, (4) if(a[i]大於a[j]) 大小不對就交換是
```C++
///week05-1.cpp step01-1 selection sort
///今天的主題是排序,老師先複習上週的selection sort選擇排序法,會用到的技巧有(1)陣列宣告、陣列初始值,(2)最後用for迴圈印出排好的答案,(3)左手i,右手j,其中 右手的 for(int j=i+1 容易出錯, (4) if(a[i]>a[j]) 大小不對就交換。
#include <stdio.h> ///排序
int a[10]={7,8,9, 1,2,3, 6,5,4, 0};
int main()
{
    for(int i=0; i<10; i++){///左手i
        for(int j=i+1; j<10; j++){///右手j
            if( a[i] > a[j] ){///大小不對,就交換
                int temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    for(int i=0; i<10; i++) printf("%d ", a[i] );

    return 0;
}
```


## step02-1
接下來複習泡泡排序法。和selection sort一樣是2個迴圈,裡面1個if判斷。但是寫法有點特別,我們先寫裡面的迴圈 for(int i=0; i小於10-1; i++) 裡面再比較 a[i] 及 a[i+1] 其中的 10-1 很難理解,希望大家能搞懂。外面再加上一個for(int k=0; k小於10-1; k++) 跑了10-1次。這個10-1次也要想想,與裡面的理由不一樣
```C++
///Week05-2.cpp step02-1 bubble sort
#include <stdio.h> ///泡泡排序
int a[10]={7,8,9, 1,2,3, 6,5,4, 0};
int main()
{
    for(int k=0; k<10-1; k++){
        for(int i=0; i<10-1; i++){
            if( a[i] > a[i+1] ){///大小不對,就交換
                int temp=a[i];
                a[i]=a[i+1];
                a[i+1]=temp;
            }
        }
        for(int i=0; i<10; i++) printf("%d ", a[i] );
        printf("\n");
    }

    return 0;
}
```

## step02-2
step02-2_快速排序qsort(a,100,sizeof(int), comp) 這真的很難懂。尤其是 int comp(裡面有2個咒語的東西) 所以我們先照著做做看。第三節課我們再講解它。

10萬個數字要排,2層迴圈 100億次
Quick Sort 只要約 90萬次,解決!!!!
找到1個人放中間,左邊 右邊

```C++
///Week05-3.cpp 思考,如果陣列的大小是10萬
///有10萬個數字要排序.... 要跑幾次?
#include <stdio.h>
#include <stdlib.h>///qsort()需要它
int comp(const void *p1, const void *p2)
{
    int d1 = *(int*)p1,  d2 = *(int*)p2;
    if(d1>d2) return +1;
    if(d1<d2) return -1;
    if(d1==d2)* return 0;
}
int main()
{
    int a[100];

    for(int i=0; i<100; i++) printf("%d ", a[i]);
    printf("\n");

    qsort( a, 100, sizeof(int), comp);

    for(int i=0; i<100; i++) printf("%d ", a[i]);
    printf("\n");
}


/*
    for(int k=0; k<100000-1; k++){///99999次, 99999x99999得到約10000000000次
        for(int i=0; i<100000-1; i++){///99999次
            if( a[i] > a[i+1] ){///大小不對,就交換
                int temp=a[i];
                a[i]=a[i+1];
                a[i+1]=temp;
            }
        }
        for(int i=0; i<10; i++) printf("%d ", a[i] );
        printf("\n");
    }*/
```

## step03-1
今天的主題是 Hardwood species 硬木的名字排序, 它有點難,所以我們先把 Input 及 Output 搞定。就像上週考試時教過的 while(gets(line)) 及 火車頭 +車廂 +車廂 +車廂, 另外有在scanf()裡面多讀入2個跳行。還有遇到空白行時 if( line[0]==0 ) break; 請試試看吧
```C++
///Week05-4.cpp step03-1 解決 Input
///(1)用今天考試過的 while(gets(line)) 讀一整行
///(2)火車頭 +車廂 +車廂 +車廂
#include <stdio.h>
char line[40];//一行不超過30字母,所以開40夠大了
int main()
{
	int T;//Test cases有幾個
	scanf("%d\n\n", &T);//啊!!! 有2個跳行

	for(int t=1; t<=T; t++){
		if(t>1) printf("\n");
		printf("現在是第%d堆資料\n", t);
		while( gets(line) ){
			//先不做事!!!
			if( line[0]==0 ) break; //離開迴圈
		}
	}
}
```

## step03-2
接下來結合 step02-2 qsort() 及step03-1 題目 InputOutput想把字串排序。不過時間不夠,我們就下週再繼續
```C++
///Week05-5.cpp step03-2 結合前2個程式
#include <stdio.h>
#include <stdlib.h>///qsort()需要它
#include <string.h>///strcmp()需要它
char line[1000000][40]; ///一百萬行,每行40個字母!!!
int comp(const void *p1, const void *p2)
{
    ///int d1 = *(int*)p1,  d2 = *(int*)p2;
    char *s1 = (char*)p1;
    char *s2 = (char*)p2;
    return strcmp(s1,s2);///字串比大小!!!
}
int main()
{
	int T;//Test cases有幾個
	scanf("%d\n\n", &T);//啊!!! 有2個跳行

	for(int t=1; t<=T; t++){
		if(t>1) printf("\n");
		int N=0;
		while( gets(line[N]) ){
			if( line[N][0]==0 ) break; //離開迴圈
			N++;
		}
		qsort( line, N, 40, comp);
		for(int i=0; i<N; i++) printf("%s\n", line[i]);
	}
}
```
