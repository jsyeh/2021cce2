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
- 計算頻率
- 統計樹種

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

```cpp
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

```cpp
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

```cpp
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

```cpp
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

```cpp
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


# Week04 第04週上課內容
程式設計 Week04 2022-03-17
0. 考試: Tell me the frequencies簡化版: while gets line
1. 主題: Tell me the frequencies Q:依序印出 A:從小到大 (長度、最大值)
2. 分析演算法: 還可以更快嗎?
3. 主題: struct結構
4. 點播/複習:教過但不懂的地方

## step01-0
考試「Tell me the frequencies」的簡化版,只解決Input 及 Output, 老師在考前複習、考後講解同學出錯的地方.zip

```cpp
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

```cpp
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

```cpp
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

```cpp
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

```cpp
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

```cpp
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


# Week05 第05週上課內容
程式設計 Week05 2022-03-24
0. 考試: Tell me the frequencies
1. 主題: 排序
2. 自己寫 selection sort 兩層迴圈
3. 自己寫 bubble sort 兩層迴圈
3. 不夠快，改用快速排序法 qsort()
4. 主題：Hardwood Species 照名字排序分類 

## step01-0
本週考試Tell me the frequencies,考試前複習、考試後示範容易出錯的地方

```cpp
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

```cpp
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

```cpp
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

```cpp
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

```cpp
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

```cpp
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


# Week06
## step01-0
考前複習、考後解說易出錯的地方,考試題目是簡化版的 Hardwood Species 的輸入資料

```cpp
///Week06-0.cpp 解的問題 Hardwood Species 統計它的種類
#include <stdio.h>
char line[1000];
int main()
{
	int T;
	scanf("%d\n\n", &T);

	for(int t=1; t<=T; t++){
		int N=0;
		while( gets(line) ){
			if( line[0]=='\0' ) break;
			N++;
		}
		if(t>1) printf("\n");
		printf("Test Case %d: %d lines\n", t, N);
	}
	return 0;
}
```
## step01-1

今天想要把 Hardwood Species 解出來。第一個步驟,是讀到的字串,都要裝到超大的陣列中。有1百萬棵樹,每顆樹的字串長度是30,我們設大一點 char tree[1000000][40] 再做對應的修改

```cpp
///Week06-1.cpp 解的問題 Hardwood Species 統計它的種類
#include <stdio.h>
///char line[1000];改讀到全部的陣列
char tree[1000000][40];///Step01 改讀到 tree 的陣列
///       1百萬棵  40字母
/// tree[0]  tree[1]   tree[2]   tree[3]
int main()
{
	int T;
	scanf("%d\n\n", &T);

	for(int t=1; t<=T; t++){
		int N=0;
		while( gets(tree[N]) ){ ///while( gets(line) ){
            if( tree[N][0] == 0) break; ///	if( line[0]=='\0' ) break;

			N++;
		}
		if(t>1) printf("\n");
		printf("Test Case %d: %d lines\n", t, N);
	}
	return 0;
}
```

## step01-2

接下來利用 qsort() 配合 strcmp() 進行字串排序, 請記得 #include  stdlib.h 及 string.h 要準備好,要自己寫 int compare()函式, 要在 main()裡面呼叫 qsort()並把參數放對。最後印出來看排好的結果。

```cpp
///Week06-2.cpp 解的問題 Hardwood Species 統計它的種類
#include <stdio.h>
#include <stdlib.h>//Step02 qsort()
#include <string.h>//Step02 strcmp()
char tree[1000000][40];
///       1百萬棵  40字母
int compare( const void *p1, const void *p2 )//Step02
{
	char * s1 = (char*)	p1;
	char * s2 = (char*) p2;
	return strcmp(s1,s2);
}
int main()
{
	int T;
	scanf("%d\n\n", &T);

	for(int t=1; t<=T; t++){
		int N=0;
		while( gets(tree[N]) ){ ///while( gets(line) ){
            if( tree[N][0] == 0) break; ///	if( line[0]=='\0' ) break;

			N++;
		}
		if(t>1) printf("\n");
		//printf("Test Case %d: %d lines\n", t, N);

		qsort( tree, N,    40,     compare );// Step02 字串排序
		//要排陣列  N個 單位大小  比大小的函式

		for(int i=0; i<N; i++){ //Step02
			printf("%s\n", tree[i] );//Step02
		}
	}
	return 0;
}
```

## step02-1
為了讓同學對於「字串排序」更熟練,老師挑了一題簡單的字串排序, 讀資料、印資料都簡單, 只專注在考大家 字串排序的地方。

```cpp
//Week06-3.cpp step02-1 專注在字串排序
#include <stdio.h>
#include <stdlib.h> //qsort()
#include <string.h> //strcmp()
char words[1000][50];//陣列
//        1千字 50字母
int compare( const void *p1, const void *p2 )
{
	char *s1 = (char*) p1;
	char *s2 = (char*) p2;
	return strcmp(s1,s2);
}
int main()
{
	int N;
	scanf("%d", &N);
	for(int i=0; i<N; i++){
		scanf("%s", words[i] ); //gets( words[i] );
	}

	qsort( words, N, 50, compare );

	for(int i=0; i<N; i++){
		printf("%s\n", words[i] );
	}
	return 0;
}
```

## step02-2
了解Hardwood Species 想要統計樹木出現的百分比,所以利用 100.0除以N, 便可以印出單一的比例,不過我們還沒有真的數「名字相同的樹」題目

```cpp
///Week06-2.cpp 解的問題 Hardwood Species 統計它的種類
#include <stdio.h>
#include <stdlib.h>//Step02 qsort()
#include <string.h>//Step02 strcmp()
char tree[1000000][40];
int compare( const void *p1, const void *p2 )//Step02
{
	char * s1 = (char*)	p1;
	char * s2 = (char*) p2;
	return strcmp(s1,s2);	
}
int main()
{
	int T;
	scanf("%d\n\n", &T);

	for(int t=1; t<=T; t++){
		int N=0;
		while( gets(tree[N]) ){ ///while( gets(line) ){
            if( tree[N][0] == 0) break; ///	if( line[0]=='\0' ) break;
            
			N++;
		}
		if(t>1) printf("\n");
		//printf("Test Case %d: %d lines\n", t, N);
		
		qsort( tree, N,    40,     compare );// Step02 字串排序
		//要排陣列  N個 單位大小  比大小的函式
		
		for(int i=0; i<N; i++){ //Step02
			printf("%s %.4f\n", tree[i], 100.0/N );//Step02
		}
	}
	return 0;
}
```


## step03-1

最後「比較前後是不是相同」,相同的話 combo++, 不相同的話, 做個了解,把前面一筆的答案印出來,再印出新的開始的字。迴圈的前面印最前面第0筆的樹名,最後迴圈外做最後一筆的收尾。迴圈比對 tree[i-1]及 tree[i] 利用 strcmp(tree[i-1],tree[i])==0 看是否相同。迴圈從1開始


這個寫法其實不太好, 應該有更好的解法。不過慢慢來, 慢慢變好即可。
```cpp
///Week06-5.cpp Hardwood Species 統計它的種類
#include <stdio.h>
#include <stdlib.h>//Step02 qsort()
#include <string.h>//Step02 strcmp()
char tree[1000000][40];
int compare( const void *p1, const void *p2 )//Step02
{
	char * s1 = (char*)	p1;
	char * s2 = (char*) p2;
	return strcmp(s1,s2);	
}
int main()
{
	int T;
	scanf("%d\n\n", &T);

	for(int t=1; t<=T; t++){
		int N=0;
		while( gets(tree[N]) ){ ///while( gets(line) ){
            if( tree[N][0] == 0) break; ///	if( line[0]=='\0' ) break;
            
			N++;
		}
		if(t>1) printf("\n");
		
		qsort( tree, N,    40,     compare );// Step02 字串排序
		
		printf("%s ", tree[0] );//先印最前面的樹,沒有答案
		int combo=1;//有第1棵樹
		
		for(int i=1; i<N; i++){ //Step02
			if( strcmp(tree[i-1],tree[i])==0 ){//tree[i-1] == tree[i]
				combo++;//相同
			}else{//不相同,做個了結
				printf("%.4f\n", combo*100.0/N );
				printf("%s ", tree[i] );
				combo=1;//又是新的開始!!!
			}
			//printf("%s %.4f\n", tree[i], 100.0/N );//Step02
		}
		printf("%.4f\n", combo*100.0/N );
	}
	return 0;
}
```

# Week07

## step01-1
上課考試前, 老師示範今天的考試題目「字串排序」,,並在考試之後,針對同學錯的地方進行解說

```cpp
//Week07-0.cpp step01-1 
//今天考字串排序, 老師針對同學錯的地方進行解說

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char line[2000][80];

int compare( const void *p1, const void *p2)
{
	return strcmp( (char*)p1, (char*)p2 );
}
int main()
{
	int N;
	scanf("%d", &N);
	for(int i=0; i<N; i++){
		scanf("%s", line[i] );
	}
	
	qsort(line, N, 80, compare );
	
	for(int i=0; i<N; i++){
		printf("%s\n", line[i] );
	}
}
```

## step01-2
介紹課堂作業中, GitHub 利用 Git指令上傳的作業,有同學寫錯了。

## step01-3
介紹今天的主角,西班牙情聖 Don Juan, 介紹 Mozart 創作的 Don Giovani, 介紹唐吉訶德, 他們的名字裡都有 Don 這個字, 是西班牙的「先生」的敬稱。接下來聽歌劇裡面的第一幕 

## step02-1
今天的主角,是Don Giovanni這個情聖,到底喜歡多少女生。我們先利用瘋狂程設,把 UVA 10420 List of Conquests 的 Input 搞定。


```cpp
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
```

## step02-2
接續前一個程式, 我們想要把它「照字母順序」排序, 使用了 qsort() 及對應的 compare()函式

```cpp
///Week07-2.cpp step02-2 qsort()
///step02-2 接續前一個程式, 我們想要把它「照字母順序」排序, 使用了 qsort() 及對應的 compare()函式

#include <stdio.h>
#include <stdlib.h> //qsort()
#include <string.h> //strcmp()
char line[2000][80];//和今天考試一樣
int compare( const void *p1, const void *p2 )
{
	return strcmp( (char*)p1, (char*)p2 );
}
int main()
{
	int N;
	scanf("%d\n", &N);

	for(int i=0; i<N; i++){
		gets( line[i] ); //遇到空格,scanf()會被斷開,不能用!!!
	}

	qsort( line, N, 80, compare );

	for(int i=0; i<N; i++){
		printf("%s\n", line[i]);
	}
	return 0;
}
```


## step02-3

```cpp
//Week07-3.cpp 解決 UVA10420 List of Conquests
// step02-3 國家名   人名(很多空格)
//          scanf()  gets()
#include <stdio.h>
#include <stdlib.h> //qsort()
#include <string.h> //strcmp()
char line[2000][80];//和今天考試一樣
int compare( const void *p1, const void *p2 )
{
	return strcmp( (char*)p1, (char*)p2 );
}
int main()
{
	int N;
	scanf("%d\n", &N);

	for(int i=0; i<N; i++){
		scanf("%s", line[i] ); //左邊的國家名
		char others[80];//剩下的
		gets( others );//右邊全部都讀掉
	}

	qsort( line, N, 80, compare );

	for(int i=0; i<N; i++){
		printf("%s\n", line[i]);
	}
	return 0;
}
```

## step03-1
接下來要統計「每個國家有幾個」, 我們手上的 line[i] 是一堆排好的國家名。可以上下2行比較,相同的,就 ++, 不相同的,就印出答案的數量。上週在 Hardwood Species 有用過這個技巧。今天再多做一個特別的修正,本來2000筆,變成2001筆。把最後一筆之後、不存在的下一筆,利用 line[N][0]=0 把那個不存在的字串設成空的字串。這樣程式就可以用簡單的迴圈運作

```cpp
//Week07-4.cpp step03-1 看是否相同: 相同時 combo++, 不相同時 印出結果
// 接下來要統計「每個國家有幾個」, 我們手上的 line[i] 是一堆排好的國家名。可以上下2行比較,相同的,就 ++, 不相同的,就印出答案的數量。上週在 Hardwood Species 有用過這個技巧。今天再多做一個特別的修正,本來2000筆,變成2001筆。把最後一筆之後、不存在的下一筆,利用 line[N][0]=0 把那個不存在的字串設成空的字串。這樣程式就可以用簡單的迴圈運作
#include <stdio.h>
#include <stdlib.h> //qsort()
#include <string.h> //strcmp()
char line[2001][80];//和今天考試一樣
int compare( const void *p1, const void *p2 )
{
	return strcmp( (char*)p1, (char*)p2 );
}
int main()
{
	int N;
	scanf("%d\n", &N);
	for(int i=0; i<N; i++){
		scanf("%s", line[i] ); //左邊的國家名
		char others[80];//剩下的
		gets( others );//右邊全部都讀掉
	}
	
	qsort( line, N, 80, compare );
	
	line[N][0]=0;//最後收尾的多出來的資料, ex.N=2000, line[N]第2001筆
	int combo=1;
	for(int i=0; i<N; i++){
		if( strcmp( line[i], line[i+1] ) == 0 ){ //相同
			combo++;
		}else{
			printf("%s %d\n", line[i], combo );
			combo=1;//剛剛忘了寫
		}
	}
	return 0;
}
```

## step03-2

剛剛的程式有出錯,少了一個combo=1 的斷開動作,需要修正

## step03-3

最後有一點空檔, 老師講解幾週前發的 Jumping Mario 的解題講解
```cpp
//Week07-5.cpp step03-3 Jumping Mario
//看懂題目: 原來是數一數, 有幾個往上跳up, 有幾個往下跳 down
#include <stdio.h>
int a[100];
int main()
{
	int T, N;
	scanf("%d", &T);
	for(int t=1; t<=T; t++){
		scanf("%d", &N);
		for(int i=0; i<N; i++){
			scanf("%d", &a[i] );
		}
		int down=0, up=0;
		for(int i=1; i<N; i++){
			if( a[i-1] > a[i] ) down++;
			if( a[i-1] < a[i] ) up++;
		}
		printf("Case %d: %d %d\n", t, up, down);
	}

}
```

# Week08
程式設計 Week08 2022-04-14

1. 考試: List of Conquests
2. 主題: bubble sort 事件
3. 問問題技巧 Fortran1 Fortran2 Fortran3
4. 主題: 檔案I/O
5. 主題: 互動程式設計

因為疫情關係, 本週改線上上課。線上上課時,互動很重要。老師寫了一個程式, 會點同學的名字, 請同學開麥、講話。

## step01-1
上課考試前,老師講解今天的考試題目 List of Conquests 並示範

```cpp
#include <stdio.h>
#include <stdlib.h> //qsort()
#include <string.h> //strcmp()
char nation[2001][80];//國家名
int compare( const void *p1, const void *p2 )
{
	return strcmp( (char*)p1, (char*)p2 );
}
int main()
{
	int N;
	scanf("%d\n", &N);

	for(int i=0; i<N; i++){
		scanf("%s", nation[i] );
		char line[80];//等一下要丟掉
		gets(line);
	}//Input OK
	
	qsort( nation, N, 80, compare );
	
	nation[N][0] = 0;//範圍外的, 變成空字串
	int combo = 1; //combo重來
	for(int i=0; i<N; i++){
		if( strcmp( nation[i], nation[i+1] ) == 0 ){ //上下相同
			combo++;
		}else{ //不相同
			printf("%s %d\n", nation[i], combo );//印答案
			combo = 1; //combo重來
		}
		//printf("%s\n", nation[i] );
	}//Output OK!
}
```

## step01-2
老師講解網路上,關於泡泡排序法的問題與故事_使用Fortran語言, 請大家看看發問、過程、結果

## step02-1
本來老師寫了一個程式,要讀入20個人名+20個分數,不過因為太複雜了、大家陣列忘光光,所以老師重寫 week08-1b.cpp 裡面只用1個整數 int grade; 然後看看他在for()迴圈裡讀讀讀123、for()迴圈裡印印印333,讓大家了解意思.zip

```cpp
///Week08-1.cpp step02-1 檔案
#include <stdio.h>
#include <string.h>
///Q: 陣列? 變數?
char names[20][20]; ///20人(複數),每人名長度20
int grades[20];///20個分數 (複數)
int main()
{
    ///int N;
    ///scanf("%d", &N); ///完了,題目沒有N,不好寫

    ///有N用for()迴圈,沒N用while()迴圈

    char name[20];///20個字母
    int grade;///分數
    int i=0;
    while( scanf("%s %d", &name, &grade)==2 ){
        strcpy(names[i], name); ///names[i] <- name
        grades[i] = grade; ///grades[i] <- grade
        i++;
    }
    int N = i;

    for(int i=0; i<N ; i++){
        printf("%s %d\n", names[i], grades[i] );
    }
}
```

```cpp
///Week08-1.cpp step02-1 檔案
#include <stdio.h>

int main()
{///假設有3筆資料
    int grade;
    for(int i=0; i<3; i++){
        scanf("%d", &grade);
    }

    for(int i=0; i<3; i++){
        printf("%d\n", grade);
    }

}
```

## step02-2
接下來陣列出場。 int grades[3] 有3個整數的陣列, int grade 只有1個整數, 把 grades[i] = grade 把讀到的資料放進陣列裡

```cpp
///Week08-2.cpp step02-2 檔案
#include <stdio.h>
int grades[3];///step02-2陣列
int main()
{///假設有3筆資料
    int grade;
    for(int i=0; i<3; i++){
        scanf("%d", &grade);
        grades[i] = grade;
    }

    for(int i=0; i<3; i++){
        printf("%d\n", grades[i] );
    }

}
```

## step03-1
接下來,還是在讀資料, 我們有3筆資料, 依序是人名、分數, 總共3筆。利用for迴圈讀, 再把資料複製到陣列裡, 最後印出來

```cpp
///Week08-3.cpp step03-1 檔案
#include <stdio.h>
#include <string.h>
char names[3][20];///3名字, 每個名字最多20字母
int grades[3];///step02-2陣列
int main()
{///假設有3筆資料
    char name[20];///一個字串 (20個字母)
    int grade;///一個整數
    for(int i=0; i<3; i++){
        scanf("%s", name);///讀入名字
        scanf("%d", &grade);///讀入分數
        strcpy( names[i], name );///把名字, 複製到 names[i]陣列
        grades[i] = grade; ///把分數,進入 grades[i]陣列
    }

    for(int i=0; i<3; i++){
        printf("%s 得到 %d\n", names[i], grades[i] );
    }

}
```

## step03-2
開啟檔案的方法,先有一個FILE的指標 fout=fopen( 檔名, 開啟模式), 印東西時很像printf()只是前面加了 f 檔案

```cpp
///Week08-4.cpp 檔案 step03-2
#include <stdio.h>
int main()
{///檔案的指標 要open          開啟方式write+
    FILE * fout=fopen("檔名.txt", "w+" );
   fprintf(fout, "Hello 我在檔案裡,哈哈\n");

    printf("Hello World\n");
}
```

## step03-3
我們把結果印出來的同時,再多開啟一個檔案,要write+寫到 file.txt 裡面, 內容用 fprintf(fout, ...) 來做到

```cpp
///Week08-5.cpp step03-3
#include <stdio.h>
#include <string.h>
char names[3][20];///3名字, 每個名字最多20字母
int grades[3];///step02-2陣列
int main()
{///假設有3筆資料
    char name[20];///一個字串 (20個字母)
    int grade;///一個整數
    for(int i=0; i<3; i++){
        scanf("%s", name);///讀入名字
        scanf("%d", &grade);///讀入分數
        strcpy( names[i], name );///把名字, 複製到 names[i]陣列
        grades[i] = grade; ///把分數,進入 grades[i]陣列
    }
    FILE * fout = fopen("file.txt", "w+" );
    for(int i=0; i<3; i++){
        printf("%s %d\n", names[i], grades[i] );
        fprintf(fout, "%s %d\n", names[i], grades[i] );
    }

}
```

## step03-4
讀入檔案,使用 scanf()改寫來的 fscanf()即可

```cpp
///Week08-6.cpp step03-4 讀入 Input 檔案
#include <stdio.h>
#include <string.h>
char names[20][20];
int grades[20];
int main()
{///假設有3筆資料
    FILE * fin = fopen( "file.txt", "r+" );
    char name[20];///一個字串 (20個字母)
    int grade;///一個整數
    for(int i=0; i<20; i++){
        fscanf(fin, "%s", name);///讀入名字
        fscanf(fin, "%d", &grade);///讀入分數
        strcpy( names[i], name );
        grades[i] = grade;
    }

    ///FILE * fout = fopen("file.txt", "w+" );
    for(int i=0; i<20; i++){
        printf("%s %d\n", names[i], grades[i] );
        ///fprintf(fout, "%s %d\n", names[i], grades[i] );
    }

}
```


## step03-5
講八卦時間,希望同學能用對的方法問問題,不要用手機拍螢幕Genius。


# Week09
程式設計 Week09 2022-04-21
1. 考試: List of Conquests
2. 複習: Bubble Sort 檔案版
3. 改進 Bubble Sort: 迴圈次數、更多項、更多項
4. C++ 物件 vs. C 結構
5. C++ STL (Standard Template Library)

(回答同學課堂作業的分數、期中問卷問題)

## step01-0
考試之前, 老師再一次做複習, 題目與上週一樣, 是List of Conquests (上週有快4成不會寫。本週約有3成不會寫)

```cpp
#include <stdio.h> //步驟 1-6
#include <stdlib.h> //qsort()
#include <string.h> //strcmp()
char nation[2001][80];

int compare( const void *p1, const void *p2 )//qsort()
{
	return strcmp( (char*)p1, (char*)p2 );//step04
}
int main()
{
	int N;
	scanf("%d", &N);
	
	for(int i=0; i<N; i++){//Step01: Input
		scanf("%s", nation[i] );//只用它
		char line[80];
		gets(line);//剩下的都讀到 line 不用它
	}

	qsort( nation, N, 80, compare ); //step03: qsort()
	
	nation[N][0]=0;//空字串
	int combo=1;
	for(int i=0; i<N; i++){//Step02: Output
		if( strcmp(nation[i],nation[i+1])==0 ){//相同
			combo++;//Step05
		}else{//不相同,印答案,重設combo
			printf("%s %d\n", nation[i], combo );
			combo=1;//Step06
		}
	}
}
```
## step01-0b
準備上課前, 老師針對大家作業的問題, 做解釋, 比較多出錯的地方,像是沒有用 Git指令上傳GitHub, 或是有指令錯誤等。也有同學漏上傳檔案。最後老師針對同學的FB訊息問題做回覆,像是疫情相關的考試、補課等。


## step01-1
今天要複習上週的泡泡排序法, 我們教了很多次, 所以再來寫一次。下一節課將會針對它做改良。

```cpp
///Week09-1.cpp step01-1 bubble sort 簡化 大到小
#include <stdio.h>
int grade[10]={9,8,1,2,3, 7,6,5,4,0};
int main()
{
    int N=10;
    for(int k=0; k<10; k++){///跑很多次,但是到底要幾次?
        for(int i=0; i<N-1; i++){
            if( grade[i] < grade[i+1] ){ ///反了
                int temp=grade[i];
                grade[i]=grade[i+1];
                grade[i+1]=temp;
            }
        }
        for(int i=0; i<N; i++) printf("%d ", grade[i] );
        printf("\n");
    }
}
```

## step02-1
研究前面的泡泡排序, 會發現「如果提早排好, 卻還是會笨笨的跑剩下的迴圈, 不會提早結束, 可以改進。所以我們在核心的迴圈前面 int change=0; 如果有反過來要交換時 change++, 在核心迴圈的後面 if(change==0) break; 提早離開迴圈。這樣就帥多了。

```cpp
///Week09-2.cpp step02-1 bubble sort 簡化 大到小
///如果本來就快要排好了.... 可以提早結束哦!!!!
#include <stdio.h>
int grade[10]={9,8,1,2,3, 7,6,5,4,0};
int main()
{
    int N=10;
    for(int k=0; k<10; k++){///跑很多次,但是到底要幾次?
        int change=0;///沒有修改
        for(int i=0; i<N-1; i++){
            if( grade[i] < grade[i+1] ){ ///反了
                int temp=grade[i];
                grade[i]=grade[i+1];
                grade[i+1]=temp;
                change++;///有一個修改
            }
        }
        if(change==0) break;///沒有修改,就好了,可以回家了
        for(int i=0; i<N; i++) printf("%d ", grade[i] );
        printf("\n");
    }
}
```


## step02-2
從前面的例子, 我們發現for迴圈好像沒有必要, 所以將 for迴圈改掉, 改用 while迴圈取代。同時我們也試了2種, 一種是小到大, 一種是大到小, 記得要差別就在核心的 if()判斷的方向。

```cpp
///Week09-3.cpp step02-2 bubble sort 「小到大」
///如果本來就快要排好了.... 可以提早結束哦!!!!
#include <stdio.h>
int grade[10]={9,8,1,2,3, 7,6,5,4,0};
int main()
{
    int N=10;
    while(1){///改用while迴圈 (跑很多次,但是到底要幾次?)
        int change=0;///沒有修改
        for(int i=0; i<N-1; i++){
            if( grade[i] > grade[i+1] ){ ///反了
                int temp=grade[i];
                grade[i]=grade[i+1];
                grade[i+1]=temp;
                change++;///有一個修改
            }
        }
        if(change==0) break;///沒有修改,就好了,可以回家了
        for(int i=0; i<N; i++) printf("%d ", grade[i] );
        printf("\n");
    }
}
```

## step02-3
接下來便可以嘗試解決上週的泡泡排序法的進階問題「分數、學號姓名」一起排序。不過我們先解決「分數排序」的部分,比較簡單。裡面的「泡泡排序的核心」也就是一個for()和一個if()裡面有交換,簡單。外面的迴圈可以用 while()也可以用for(), 不過因為用for()比較簡單,可以少很多很行,所以雖然比較沒效率, 還是用它吧。

```cpp
///Week09-4.cpp step02-3 在瘋狂程設裡, 不只要排序很多項。想要排序更多項哦!
///我們先把Input 及 Output 改好。不過在交換時, 我們只換一些些而已, 下一個版本要改進
#include <stdio.h>
char name[100][80];//最多100筆資料,每筆80個字母
int grade[100];//最多100筆資料,每筆是int整數
int main()
{
	int N;
	scanf("%d", &N);
	for(int i=0; i<N; i++){  //為什麼有加 &
		scanf("%s %d", name[i], &grade[i] );
	}

	for(int k=0; k<N-1; k++){//排序囉!!!
		for(int i=0; i<N-1; i++){//先寫泡泡核心
			if( grade[i] < grade[i+1] ){
				int temp=grade[i];//交換
				grade[i]=grade[i+1];
				grade[i+1]=temp;
			}
		}
	}
	for(int i=0; i<N; i++){
		printf("%s %d\n", name[i], grade[i] );
	}
}
```

## step03-1
在交換分數時,要把名字一起排序,所以我們要知道怎麼做字串的交換,關鍵程式碼是 strcpy()可以把右邊複製到左邊 strcpy(a, b), 那要如何知道是左邊還是右邊呢 可以用 int a=10 來記憶,10會放到a裡面。用 a=b 來想像也可以,把 b的值放到a裡面去。

```cpp
///Week09-5.cpp step03-1 把要名字一起排序!!!
#include <stdio.h>
#include <string.h> //strcpy()
char name[100][80];//最多100筆資料,每筆80個字母
int grade[100];//最多100筆資料,每筆是int整數
int main()
{
	int N;
	scanf("%d", &N);
	for(int i=0; i<N; i++){  //為什麼有加 &
		scanf("%s %d", name[i], &grade[i] );
	}

	for(int k=0; k<N-1; k++){//排序囉!!!
		for(int i=0; i<N-1; i++){//先寫泡泡核心
			if( grade[i] < grade[i+1] ){
				int temp=grade[i];//交換
				grade[i]=grade[i+1];
				grade[i+1]=temp;

				char tempName[80]; //字串怎麼交換? strcpy()
				strcpy( tempName, name[i] );
				strcpy( name[i], name[i+1] );
				strcpy( name[i+1], tempName );
			}
		}
	}
	for(int i=0; i<N; i++){
		printf("%s %d\n", name[i], grade[i] );
	}
}
```

## step03-2 
step03-2_因為同學不熟 qsort() 及 strcmp() , 老師在今天上課時有先複習 qsort(), 而最後一個課堂作業, 則是再教 strcpy(a,b) 及 strcmp(a,b) 讓大家熟悉。課本上也有對應的介紹, 在第4章。

因為有很多同學對於 strcmp() 不熟, 所以老師把課本第4章的範例跑一次, 加深大家的印象。

```
strlen() string length
strcpy() string copy  
strcmp() string compare

strcpy(a,b) 可用 int a=10
    或 a=b來理解

strcmp(a,b) 要怎麼理解呢?
       a-b
      10-5 得到正的
       5-5 得到0
       5-10 得到負的
```

```cpp
///Week09-6.cpp step03-2 
///因為有很多同學對於 strcmp() 不熟, 所以老師把課本第4章的範例跑一次, 加深大家的印象。
#include <stdio.h>
#include <string.h>
char strA[] = "ABC";
char strB[] = "ABCD";
int main()
{
    int c = strcmp( "B", "C" );
    printf(" B - C 得到 %d\n", c );

    c = strcmp(strA, strB);
    printf("%s %s 得到 %d\n", strA, strB, c );
}
```

# Week10
程式設計 Week10 2022-04-29
1. 考試: 「學號姓名、分數」排序
2. 主題: 物件排序
3. 主題: 撲克牌洗牌
4. 主題: 互動程式設計

也就是今天有2大主題

1. C++ STL 很強, 做出它的sort
2. 互動程式設計:寫小遊戲 (還可給家人玩)

## step01-0
考試前, 老師先示範練習,希望大家可以考試順利。

```cpp
#include <stdio.h>
#include <string.h> //strcpy() string copy
char name[100][30], tempName[30];
int grade[100];
int main()
{
	int N;//Input
	scanf("%d", &N);
	for(int i=0; i<N; i++){
		scanf("%s %d", name[i], &grade[i] );
	}
	for(int k=0; k<N-1; k++){//Sorting
		for(int i=0; i<N-1; i++){
			if( grade[i] < grade[i+1] ){//not correct, swap
				int temp = grade[i];
				grade[i] = grade[i+1];
				grade[i+1] = temp;
				strcpy( tempName, name[i] );
				strcpy( name[i], name[i+1] );
				strcpy( name[i+1], tempName );
			}
		}
	}
	for(int i=0; i<N; i++){//Output
		printf("%s %d\n", name[i], grade[i] );
	}
}
```

## step01-1
今天考試題目,我們改寫成,利用檔案來 Input, 將學會的技巧是,如何利用 CodeBlocks 在同一個目錄中,存 input.txt 這個文字檔, 再於 week10-1.cpp 裡,把檔案的內容讀進來, 再printf()出來

1. CodeBlocks 新開檔案,存檔 input.txt
2. 把瘋狂程設今天考試 Input拿來用
3. 利用 `FILE * fin = fopen("input.txt", "r");`開啟檔案
4. 利用 `fscanf()`可以從檔案讀入
5. 再模仿今天考試的程式, 把 Input(檔案)及 Output都搞定

下面是 input.txt
```
20
A001 100
A002 85
A003 27
A004 58
A005 53
A006 37
A007 79
A008 59
A009 46
A010 83
A011 92
A012 76
A013 39
A014 60
A015 64
A016 94
A017 81
A018 47
A019 28
A020 62
```
下面是程式
```cpp
///Week10-1.cpp step01-1
///小心,要用 .cpp 副檔名
///(1)讀檔案 FILE * fin=fopen("檔名", "r");
#include <stdio.h>
char name[100][30];
int grade[100];
int main()
{
    FILE * fin = fopen("input.txt", "r");
    int N;
  ///scanf("%d", &N);///以前寫法
    fscanf( fin, "%d", &N );
    ///只是輔助 printf("讀到N是: %d\n", N);
    for(int i=0; i<N; i++){
      ///scanf("%s %d", name[i], &grade[i] );
        fscanf( fin, "%s %d", name[i], &grade[i] );
        ///只是輔助 printf("讀到了 %s %d\n", name[i], grade[i] );
    }

    for(int i=0; i<N; i++){
        printf("%s %d\n", name[i], grade[i] );
    }
}
```

## step02-1
接續前一個程式,把排序寫完。目的,是為了要做比較的範本,因為等一下要用 C++ 的 class 及 sort 做改寫, 有大量簡化的改變。
```cpp
///Week10-2.cpp step02-1 小心,要用 .cpp 副檔名
///(1)讀檔案 (2)要做排序
#include <stdio.h>
#include <string.h>
char name[100][30], tempName[30];
int grade[100];
int main()
{
    FILE * fin = fopen("input.txt", "r");
    int N;
    fscanf( fin, "%d", &N );
    for(int i=0; i<N; i++){
        fscanf( fin, "%s %d", name[i], &grade[i] );
    }

    for(int k=0; k<N-1; k++){
        for(int i=0; i<N-1; i++){
            if( grade[i] < grade[i+1] ){
                int temp=grade[i];
                grade[i] = grade[i+1];
                grade[i+1] = temp;
                strcpy( tempName, name[i] );
                strcpy( name[i], name[i+1] );
                strcpy( name[i+1], tempName );
            }
        }
    }

    for(int i=0; i<N; i++){
        printf("%s %d\n", name[i], grade[i] );
    }
}
```

## step02-2
改利用 C++ 的 `class` 來修改, 變得很容易讀。 `class Student {...};` 大寫的`Student` 設計好形狀, 用這個形狀來宣告 `Student student[20];` 小寫的student有20個, 接下來拿 `student[i].grade` 及 `student[i+1].grade` 做比較, 再整個 `student[i]` 及 `student[i+1]` 做交換,好像清楚很多。

```cpp
///Week10-3.cpp step02-2 小心,要用 .cpp 副檔名
///(1)讀檔案 (2)要做排序 (3) 要用 C++ class 物件
#include <stdio.h>
class Student { ///(大寫)學生 裡面有
public: ///公開給別人用,所以 main()可以存取到裡面的資料
    char name[30];///名字(30字母)
    int grade;///分數
};
Student student[100];///(大寫)Student student[100];//有100個student
int main()
{
    FILE * fin = fopen("input.txt", "r");
    int N;
    fscanf( fin, "%d", &N );
    for(int i=0; i<N; i++){
        fscanf( fin, "%s %d", student[i].name, &student[i].grade );
    }
    for(int k=0; k<N-1; k++){
        for(int i=0; i<N-1; i++){
            if( student[i].grade < student[i+1].grade ){
                Student temp = student[i];
                student[i] = student[i+1];
                student[i+1] = temp;
            }
        }
    }
    for(int i=0; i<N; i++){
        printf("%s %d\n", student[i].name, student[i].grade );
    }
}
```


## step02-3
最後我們再用 C++ 的 vector 及  sort 做改寫, 程式碼突然變得很好讀。

```cpp
///Week10-4.cpp step02-3 小心,要用 .cpp 副檔名
///(1)讀檔案 (2)要做排序 (3) 要用 C++ class 物件, (4) std::sort
#include <stdio.h>
#include <vector> ///付出的代價 std::vector<Student>
#include <algorithm> ///付出的代價 std::sort() 直接排序,帥!
class Student { ///(大寫)學生 裡面有
public: ///公開給別人用,所以 main()可以存取到裡面的資料
    char name[30];///名字(30字母)
    int grade;///分數
};
///Student student[100];///(大寫)Student student[100];//有100個student
bool compare( Student a, Student b ){
    return (a.grade > b.grade) ;
}
int main()
{
    FILE * fin = fopen("input.txt", "r");
    int N;
    fscanf( fin, "%d", &N );

    std::vector<Student> student(20);
    for(int i=0; i<N; i++){
        fscanf( fin, "%s %d", student[i].name, &student[i].grade );
    }

    std::sort( student.begin(), student.end(), compare );

    for(int i=0; i<N; i++){
        printf("%s %d\n", student[i].name, student[i].grade );
    }
}
```

## step03-1
回顧最近3週的sort排序相關的事件及程式。了解今天的程式解法其實在3週前的事件就已經有人提出來, 但是因為需要一些背景知識,所以同學一開始會因為看不懂而忽略珍貴的解答。現在大家有練習過2次,我們上課就練習到這裡。要同學要自己再多練習幾次,才會熟悉。

## step03-2
今天的第二個主題,是互動程式設計,老師挑選MIT Media Lab 發明的 Processing 語言,使用幾天前剛出來的最新版,配合老師的中文介面翻譯,教大家size(),background(),fill(),textSize(), text() 等,可以畫出彩色的字。另外也了解Color Selector色彩選擇器的使用,挑選適合的色彩來用。

```processing
//File-Pref 設定,超大字型
//Processing語言,由MIT Media Lab 發明,適合初學者
//在Android, Web, Mac, iPhone,適合畫圖、互動、寫遊戲
size(300,300);//大視窗
background(#FFFFBF);///背景色
String name="Good";
textSize(50);//字的大小: 50
fill(#3D277C);///填充色:暗暗的
text(name, 50,50);

fill(#FA1C2B);///填充色:紅紅的
text(name, 50,100);
```

# Week11

## step01-0
今天考試題目與上週相同, 但老師多教了 C++ STL 可以讓程式碼更好寫、更好懂(只是要付出代價、不見得程式比較短), 因此在考試前, 老師將2種方法都示範過一次

舊方法
```cpp
#include <stdio.h>
#include <string.h> //strcpy()
char name[100][30], tempName[30];
int grade[100];
int main()
{
	int N;
	scanf("%d", &N);
	for(int i=0; i<N; i++){
		scanf("%s %d", name[i], &grade[i]);
	}
	for(int k=0; k<N-1; k++){
		for(int i=0; i<N-1; i++){
			if( grade[i] < grade[i+1] ){
				int temp=grade[i];
				grade[i] = grade[i+1];
				grade[i+1] = temp;
				strcpy( tempName, name[i] );
				strcpy( name[i], name[i+1] );
				strcpy( name[i+1], tempName );
			}
		}
	}
	for(int i=0; i<N; i++){
		printf("%s %d\n", name[i], grade[i]);
	}
}
```

新方法 C++ STL

```cpp
#include <stdio.h>
#include <vector> //not <vector.h>
#include <algorithm> //std::sort()
class Student{
public:
	char name[30];
	int grade;
};
bool compare( Student a, Student b ){
	return (a.grade>b.grade) ;
}
int main()
{
	int N;
	scanf("%d", &N);
	
	std::vector<Student> stu(N);
	for(int i=0; i<N; i++){
		scanf("%s %d", stu[i].name, &stu[i].grade);
	}
	std::stable_sort( stu.begin(), stu.end(), compare );	
	for(int i=0; i<N; i++){
		printf("%s %d\n", stu[i].name, stu[i].grade);
	}
}
```

## step01-1
上週教了 C++ STL 的新方法後, 我們今天要把一些舊題目,用新方法來做,會方便很多。現在要嘗試  Hardwood Species 的 input, 利用 CodeBlocks 的 fopen()開啟 input.txt, 再看能不能順利印出來。

input.txt
```
1
Red Alder
Ash
Aspen
Basswood
Ash
Beech
Yellow Birch
Ash
Cherry
Cottonwood
Ash
Cypress
Red Elm
Gum
Hackberry
White Oak
Hickory
Pecan
Hard Maple
White Oak
Soft Maple
Red Oak
Red Oak
White Oak
Poplan
Sassafras
Sycamore
Black Walnut
Willow
```

```cpp
///Week11-1.cpp step01-1 讀入 Hardwood那題
#include <stdio.h>
int main()
{
    int T;
    //scanf("%d", &T);
    FILE * fin = fopen("input.txt", "r");
    fscanf(fin, "%d", &T);///讀檔
    printf("你讀到了T: %d\n", T);
}
```

## step02-1
接下來繼續利用FILE的輸入,來將全部資料讀入,其fgets()與之前教過的gets()有一些不同皫地方,像是參數不同、讀入的跳行不同等。

```cpp
///Week11-2.cpp step02-1 讀入 Hardwood那題
///多學會了 fgets()
/// gets(line)  vs. fgets(line, 長度, fin)
///    跳行會不見    跳行還會在
#include <stdio.h>
char line[100];
int main()
{
    int T;
    //scanf("%d", &T);
    FILE * fin = fopen("input.txt", "r");
    fscanf(fin, "%d", &T);///讀檔
    printf("你讀到了T: %d\n", T);
    /// scanf() vs.  gets()
    ///fscanf() vs. fgets()
    ///while( gets(line) ){
    while( fgets(line, 100, fin) ){
        printf("讀到了= %s =\n", line );///做處理
    }
}
```

## step02-2
接下來介紹C++ STL 的 map 可以將左邊的東西, 查表對照到右邊的東西。用起來很像變形的陣列, 可以使用 table[line]++ 來讓讀到的東西統計數字++。另外要小心fgets()在讀入資料時,會有結尾的跳行需要處理掉。

```cpp
///Week11-3.cpp step02-2
/// C++ STL 存資料!!! 再用 for迴圈印出來
#include <stdio.h>
#include <string.h>
///#include <vector>
#include <map> ///std::map<左邊, 右邊>
#include <string> ///沒有 .h 哦
char line[100];
int main()
{
    int T;
    FILE * fin = fopen("input.txt", "r");
    fscanf(fin, "%d", &T);///讀檔
    ///std::map< 字串, 整數 > 可以把字串,map對應成ans
    std::map< std::string, int > table;

    while( fgets(line, 100, fin) ){
        line[ strlen(line)-1 ] = 0;  ///做處理,刪掉最後的跳行
        printf("讀到了= %s =\n", line );
        table[ line ] ++;
    }

}
```

## step02-3
再利用 c++11 的語法, 用 for迴圈印出來

```cpp
///Week11-4.cpp step02-3
/// C++ STL 存資料!!!
#include <stdio.h>
#include <string.h>
///#include <vector>
#include <map> ///std::map<左邊, 右邊>
#include <string> ///沒有 .h 哦
char line[100];
int main()
{
    int T;
    FILE * fin = fopen("input.txt", "r");
    fscanf(fin, "%d", &T);///讀檔
    ///std::map< 字串, 整數 > 可以把字串,map對應成ans
    std::map< std::string, int > table;

    while( fgets(line, 100, fin) ){
        line[ strlen(line)-1 ] = 0;  ///做處理,刪掉最後的跳行
        printf("讀到了= %s =\n", line );
        table[ line ] ++;
    }
    for( const auto &tree : table ){
        printf("%s %d\n", tree.first.c_str(), tree.second );
    }

}
```

## step03-1
今天教得有點不順, 所以老師嘗試重新將 List of Conquests 這題重新使用 map 來實作。不過遇到語法中 c++11 沒能預設被使用的問題, 所以放棄。下週重教這部分, 希望能改用循序漸近的方式, 一步步帶大家熟悉這些內容。

```cpp
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
```

# Week12

## step01-1
step01-1_今天考試的題目C++ STL 的方法做排序。但因線上上課不方便考試,所以改成課堂作業, 請用老師上週的教法, 有些 C 的語法, 及 C++ 的 class, vector, stable_sort 來完成, 使用瘋狂程設、練習模式, 截圖上傳。

```cpp
#include <stdio.h>
#include <vector>
#include <algorithm>
class Student{
public: //!!!! : not ;
	char name[30];
	int grade;
};
bool compare( Student a, Student b ){
	return  a.grade > b.grade  ;
}
int main()
{
	int N;
	scanf("%d", &N);
	std::vector<Student> stu(N);
	for(int i=0; i<N; i++){ //(1) Input
		scanf("%s %d", stu[i].name, &stu[i].grade );
	}

	std::stable_sort(stu.begin(), stu.end(), compare );
	
	for(int i=0; i<N; i++){ //(2) Output
		printf("%s %d\n", stu[i].name, stu[i].grade );
	}
}
```
## step01-2
step01-2_為了幫大家慢慢熟悉C++,老師買了課本的C++繪本電子檔,接著教一些新的內容,先從 iostream 的 std 的 cin 及 cout 來示範。

```cpp
///Week12-2.cpp step01-2
///改用 C++ 的 std::cin   std::cout
///在這個範例,練習 C++ 的 Input 及 Output 方法
#include <iostream>

int main()
{
	int N;
	std::cin >> N;

	std::cout << "I got N:" << N;

	return 0;
}
```

## step02-1
學了 cin 及 cout 後, 我們利用 class 發明一個裡面有name[30]及 int grade 的東西, 在使用時,使用 for迴圈讀入很多個, 再利用 for迴圈印出很多個, 其中 stu[i].name 是第i個學生的name名字, stu[i].grade 是第i個學生的grade分數

```cpp
///Week12-3.cpp step02-1
///改用 C++ 的 class and std::cin   std::cout
///在這個範例,練習 C++ 的 Input 及 Output 方法
#include <iostream>
class Student{
public:
	char name[30];
	int grade;
};

Student stu[100];
int main()
{
	int N;
	std::cin >> N;
	for(int i=0; i<N; i++){
		std::cin >> stu[i].name;
		std::cin >> stu[i].grade;
	}
	std::
	for(int i=0; i<N; i++){
		std::cout << stu[i].name << " ";
		std::cout << stu[i].grade << std::endl ;
	}                                  ///end line

	return 0;
}
```

## step02-2
因為程式裡有許多 std加上2個冒號的怪符號, 代表 std裡面的cin 或 std裡面的cout, 所以可以把這個 namespace省略, 使用 using namespace std; 後, 便能大量省略程式了。

```cpp
///Week12-4.cpp step02-2
///使用 using namespace std 來簡化程式裡的 std::
#include <iostream>
using namespace std;
class Student{
public:
	char name[30];
	int grade;
};
Student stu[100];
int main()
{
	int N;
	cin >> N;
	for(int i=0; i<N; i++){
		cin >> stu[i].name;
		cin >> stu[i].grade;
	}///std裡面的cin

	for(int i=0; i<N; i++){
		cout << stu[i].name << " ";
		cout << stu[i].grade << endl ;
	}                                  ///end line
	return 0;
}
```

## step02-3
接下來,再介紹 C++ 的高級功能 vector 配合大於小於的符號,可以有一個任意大小的陣列哦,只要逐一 v.push_back(數)便可以加到後面, 再利用 v[i] 來取出來。

了解C++ STL 的 vector 簡單使用方式,包括如何宣告、如何push_back()、如何像陣列一樣使用它。


```cpp
///Week12-5.cpp step02-3
/// C++ STL 存檔時一定要 .cpp
#include <iostream> ///為了 cout
#include <vector>
using namespace std;

int main()
{
    vector<int> v;///沒說有多大,就0格

    v.push_back(10); ///加大1格, 放入10
    v.push_back(20); ///加大1格, 放入20
    v.push_back(30); ///加大1格, 放入30
    ///所以現在有3個
    for(int i=0; i<3; i++){
        cout << v[i];
        cout << endl;
    }
}
```



## step03-1
實習課的「銘傳銘傳會考」的題目, 有幾題同學不熟悉,所以老師進行講解示範。首先介紹如何找到最小值、最大值。

```cpp
//Q: 迴圈不知道怎麼寫, 因為不知道有幾個
//Q: 最大值怎麼做? 最小值怎麼做?
#include <stdio.h>
int main()
{///Trick!你要找最小的? 我先放上最大的 (拋磚引玉)
	int max=-99999, min=99999, n; //反過來操作
	for(int i=0; i<30; i++){
		scanf("%d", &n );
		if( n == 0 ) break;
		if( n > max ) max = n;//max最大值。如果有人比max還大,老大換人當
		if( n < min ) min = n;
		//printf("%d ", n);
	}
	printf("[%d,%d]", min, max);
}//Output 啊,格式不對,先把格式弄對
```


## step03-3
實習課的題目,把三個數字,組出最大的數字,再加1。裡面用到了大量的if()判斷, 便能完成這題。但是要小心 if-else 來避免出現重覆進入的狀況。

```cpp
//Q: 5哪裡來的?
//Q: 大到小嗎?
//Q: 怎麼找最大值? 怎麼找最小值?
#include <stdio.h>
int main()
{
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	if( a>=b && b>=c ) printf("%d", a*100+b*10+c+1);
	else if( b>=a && a>=c ) printf("%d", b*100+a*10+c+1);
	else if( a>=c && c>=b ) printf("%d", a*100+c*10+b+1);
	else if( c>=a && a>=b ) printf("%d", c*100+a*10+b+1);
	else if( b>=c && c>=a ) printf("%d", b*100+c*10+a+1);
	else if( c>=b && b>=a ) printf("%d", c*100+b*10+a+1);

}
```

# Week13

## step01-1
step01-1_利用 size() background() fill() textSize() text() 等, 複習之前教過的秀文字及色彩

複習上次教過的互動程式設計Processing畫字
File-Preference (把字型調大、標楷體)
1. size()大小
2. background()背景
3. fill()填充的色彩
4. textSize()文字的大小
5. text()秀文字

File-Save week13_1_text
(要用底線,不能用-減號、不能用中文、不能用任何符號)
(因為 Java 的檔名有限制!)(不能數字開頭)

```processing
size(300,300);//大小
background(#FFFAE8);//淡黃背景色
fill(#97C4FA);//天藍色
textSize(50);//字的大小
text("Hello", 50,50);//秀文字
```

## step01-2
step01-2_複習上次教過的互動程式設計Processing互動,加上void setup()及void draw(), 大部分程式放 setup(), text() 的座標改成mouseX,mouseY 並放到draw()裡,便會看到很多殘影的Hello

複習上次教過的互動程式設計Processing互動
Ctrl-N 開新檔案 File-Save 存成 week13_2_mouse
1. void setup() 設定
2. void draw() 畫圖
3. 把剛剛的程式,移一些過去

```processing
void setup(){
  size(300,300);
  background(#FFFAE8);
  fill(#97C4FA);
  textSize(50);
}
void draw(){
  text("Hello", mouseX, mouseY);
}
```

## step01-3
step01-3_剛剛看到文字的座標預設是在左下角,可能不合乎直覺,所以可在setup()裡使 textAlign(CENTER,CENTER); 改成座標是對字的中心點。寫了3行英文的晚餐,接下來將會讓大家用mouse來決定晚餐吃什麼

用滑鼠,來決定晚餐吃什麼!!!

1. Ctrl-N 新程式 week13_3_dinner
2. 畫面有點糟, 要清背景 background()放在 draw()裡面
3. 畫出晚餐的文字 Dinner1, Dinner2, Dinner3 (英文)
4. 為了解決字的座標 用正中間來當座標, 會比較清楚
5. textAlign(CENTER,CENTER); 文字顯示時,對齊座標正中心

```processing
void setup(){//只做1次
  size(300,300);
  fill(#97C4FA);
  textSize(50);
  textAlign(CENTER,CENTER);
}
void draw(){//每秒60次
  background(#FFFAE8);
  text("Dinner 1", 150,  50);
  text("Dinner 2", 150, 150);
  text("Dinner 3", 150, 250);
  //text("Hello", mouseX, mouseY);
}
```

## step02-1
step02-1_利用mouse來決定吃什麼。有if()及 rect() 還有 int choice=mouseX%3;的到選擇

在 Processing 裡 Ctrl-N 開新的程式, 存成 week13_4_dinner_mouse
1. 程式和剛剛相似, 但是多了框框選擇 rect(x1, y1,  w, h)
2. 利用 int choice = mouseX%3 來得到 0,1,2 的可能的值
3. 利用 if(choice == 0) 畫第一個框框, 然後第二個第三個

```processing
void setup(){//只做1次
  size(300,300);
  fill(#97C4FA);
  textSize(50);
  textAlign(CENTER,CENTER);
}
void draw(){//每秒60次
  background(#FFFAE8);
  text("Dinner 1", 150,  50);
  text("Dinner 2", 150, 150);
  text("Dinner 3", 150, 250);
  int choice = mouseX % 3; //0,1,2
  if(choice==0) rect( 0, 25, 50,50);
  if(choice==1) rect( 0,125, 50,50);
  if(choice==2) rect( 0,225, 50,50);
}
```



## step02-2
要把畫面做得更好!!! 而且更有感覺!!!
Ctrl-N, Save 存成 week13_5_dinner_random 亂數來決定
1. random() 可以亂數決定1個數字 ex. random(3) => 0.0 .... 2.9999 <3.0

```processing
void setup(){//只做1次
  size(300,300);
  fill(#97C4FA);
  textSize(50);
  textAlign(CENTER,CENTER);
}
int choice = -1;//-1沒選, 0,1,2有選
void draw(){//每秒60次
  background(#FFFAE8);
  text("Dinner 1", 150,  50);
  text("Dinner 2", 150, 150);
  text("Dinner 3", 150, 250);
  if(choice==0) ellipse( 30, 50, 50,50);
  if(choice==1) ellipse( 30,150, 50,50);
  if(choice==2) ellipse( 30,250, 50,50);
}
void mousePressed(){//當mouse按下去時
  choice = int( random(3) ) ; //取出整數0,1,2
}          //會在0.00~2.99(不包括3.0)
```

## step03-1

step03-1_想要將我們的程式放上網頁,讓大家可以玩, 所以切換到 p5.js 模式, 再把程式碼進行自動翻譯轉換, 執行可以在Chrome看到結果。存檔 week13 後, 請將程式碼放上GitHub 的 你的帳號裡 你的帳號.github.io 這個倉庫, 5分鐘便可以看到程式上網。要小心, 檔名要一致,也就是確定 index.html裡的檔名不是亂碼哦

想要放到網頁裡! 需要翻譯!!
Processing to p5.js

- 步驟1: 右上角 Java 改 p5.js
- 步驟2: week13_5_dinner_random 程式 去轉檔
- https://pde2js.herokuapp.com/ 貼在左邊, 按 Convert
- 步驟3: 把右邊程式碼, 貼到 Processing p5.js 這個窗
- Run 會跑出來哦!
- 步驟4: 把程式存檔成 桌面的 week13 把它放上 GitHub
- `https://github.com/你的帳號/你的帳號.github.io`
- 你之後可以在 `https://你的帳號.github.io/week13` 看到你程式上網了!!!


```processing
// 步驟1: 右上角 Java 改 p5.js
// 步驟2: week13_5_dinner_random 程式 去轉檔
// https://pde2js.herokuapp.com/ 貼在左邊, 按 Convert
// 步驟3: 把右邊程式碼, 貼到 Processing p5.js 這個窗
// Run 會跑出來哦!
// 步驟4: 把程式存檔成 桌面的 week13 把它放上 GitHub
// https://github.com/你的帳號/你的帳號.github.io
// 你之後可以在 https://你的帳號.github.io/week13 看到你程式上網了!!!

function setup() {
    initializeFields();
    // 只做1次
    createCanvas(300, 300);
    fill(color(0x97, 0xC4, 0xFA));
    textSize(50);
    textAlign(CENTER, CENTER);
}

// -1沒選, 0,1,2有選
var choice;

function draw() {
    // 每秒60次
    background(color(0xFF, 0xFA, 0xE8));
    text("Dinner 1", 150, 50);
    text("Dinner 2", 150, 150);
    text("Dinner 3", 150, 250);
    if (choice == 0)
        ellipse(30, 50, 50, 50);
    if (choice == 1)
        ellipse(30, 150, 50, 50);
    if (choice == 2)
        ellipse(30, 250, 50, 50);
}

function mousePressed() {
    // 當mouse按下去時
    // 取出整數0,1,2
    choice = int(random(3));
}

function initializeFields() {
    choice = -1;
}
```

## step03-2
step03-2_有同學大一上沒修過我的課,還沒加入 GitHub Pages 網頁的倉庫, 就只要記得 Add Repo 新增倉庫, 倉庫名是 你的帳號.github.io  同時記得勾選 Add README.md。假設你的帳號是 twfarmer 便能有你的網站 twfarmer.github.io 

之後老師便與大家解釋今天上課時點名都問「值日生」可是進度好像太快, 因為值日生本來動作就比較快。我們的週數還夠, 所以之後會教「互動程式設計」讓大家享受寫程式的樂趣。

# Week14

## step01-1
step01-1_PFont font = createFont(名型名稱, 50) 能把中文字型建出來蒹使用它 textFont(font)

```processing
//week14_PFont
//File-Preference 改中文字型,大字形
size(300,300);
//textSize(50);
//text("中文", 50,50);//執行時變亂碼(英文字型)
PFont font = createFont("標楷體", 50);//建字型
textFont(font);//使用剛剛建好的字型
text("中文", 50,50);//正常中文字,因為字型好了
```

## step01-2
step01-2_week14_PImage 可以有圖片, 使用 PImage img 宣告一張PImage。 img=loadImage(檔名) 可以把圖讀進來, 其中圖是拉到程式的那個框框中。image(img, 0,0) 會將圖畫在 0,0的地方

```processing
//week14_PImage 圖片
size(300,300);
//小心,圖片要先準備好,而且檔名要小心
//檔名如果存錯,就要寫那個一模一樣的錯的檔名!!
//神操作: 把程式這個窗,當成檔案總管!!! 拉進來
PImage img = loadImage("elephent.jpg");//圖檔
//你的圖檔,會在 week14_PImage的目錄
image( img, 0, 0);//在0,0的地方,畫出你的圖檔
```


## step01-3
step01-3_image(img, x, y, w, h) 可以設定圖的位置、大小

```processing
//week14_PImage 圖片
size(656,437);//你可依圖大小調整
//小心,圖片要先準備好,而且檔名要小心
//檔名如果存錯,就要寫那個一模一樣的錯的檔名!!
//神操作: 把程式這個窗,當成檔案總管!!! 拉進來
PImage img = loadImage("elephent.jpg");//圖檔
//你的圖檔,會在 week14_PImage的目錄
image( img, 0, 0);//在0,0的地方,畫出你的圖檔
image( img, 0, 0, 656/2, 437/2);//圖可調大小
//        座標x,y  寬度, 高度 
```


## step02-1
step02-1_image 利用 mouseX, mouseY 把圖片大量畫在不同的地方, 讓畫面留下一堆殘影

```processing
//week14_image_mouseX_mouseY 互動
PImage img;//在外面宣告, 才能在 setup()及draw()
void setup(){//設定
  size(500,300);
  img = loadImage("image.png");
}//可用任何你想要畫的圖!!! 放到你的程式目錄
void draw(){//畫圖,每秒60次
  image(img, mouseX, mouseY);
}
```

## step02-2
step02-2_能畫一張圖片後,想要有2張圖片,分別是主角、主角發射的子彈。主角的位置會隨mouseX,mouseY而移動,而子彈會在按下mousePressed之後,慢慢往前移動

```processing
//想要有個主角img,按mouse會發射子彈img2
PImage img, img2;
void setup(){
  size(300,600);
  img = loadImage("img.png");//主角
  img2 = loadImage("img2.png");//子彈
}
int dy=0;//子彈飛多遠
void draw(){
  background(255);
  imageMode(CENTER);
  image(img, mouseX, mouseY);
  if(mousePressed){
    image(img2, mouseX, mouseY-dy);
    dy++;
  }
}//技巧 選好指令, 右鍵,可看相關的說明
```


## step03-1
step03-1_想要讀入3D模型,並且畫出來。使用 PShape gundam 並配合 loadShape()來將Gundam.obj讀入,配入5個檔案。要小心 size()要設定P3D才能正確使用3D功能。這次花了1個小時時間慢慢做出來。shape()畫出很小的模型,scale()可放大,rotateY()可對Y轉動,translate()可移動位置,Y軸方向的正負號問題等。

1. 下載老師有買一個 gundam的模形 (貼圖, 模型檔,5個)
2. Ctrl-N 開新的 Processing 程式, 存成 week14_gundam
3. 把下載的5個檔案,拉到我們 week14_gundam 的程式裡
4. 會有一個對應的資料夾 week14_gundam 裡面的 data 會有那5個檔案哦
5. 接下來是程式: PShape gundam 宣告一個變數
6. void setup() 裡,  gundam = loadShape("Gundam.obj");
7. void draw() 裡, shape(gundam);

```processing
PShape gundam;
void setup(){
  size(500,500,P3D);
  gundam = loadShape("Gundam.obj");//小心大小寫
}
void draw(){
  background(128);
  //倒過來,要再倒回來....
  translate(250, 250); //往右移一半250
  scale(20, -20, 20);//放大20倍,看到左半邊
  rotateY( radians(frameCount) );//要放在下面
  shape(gundam); //太小了!!!
}
```

## step03-2
step03-2_最後10分鐘,複習Git的指令,解釋git clone 遇到 already exists 的原因、配合 git pull 從雲端拉下來更新。更新目錄後 git add . 再 git commit 最後 git push 完成


# Week15

## step01-1
讀入小地鼠的圖片, 從Teams下載, 利用上週教的 PImage img1, img2, img3, img4 來宣告變數, 再用 loadImage(檔名)來讀入圖片

```processing
//Week15_1_gopher 小地鼠
PImage img1, img2, img3, img4;
void setup(){//設定
  size(640,480);
  img1 = loadImage("groundhogIdle.png");
  img2 = loadImage("groundhogDown.png");
  img3 = loadImage("groundhogLeft.png");
  img4 = loadImage("groundhogRight.png");
}
void draw(){//畫圖
  image(img1, 0, 0);
  image(img2, 100, 0);
  image(img3, 200, 0);
  image(img4, 300, 0);
}
```

## step01-2
新增 PImage gopher 並利用keyPressed()來調整gopher對應的圖,以便按下方向鍵時,gopher會用正確方向的圖

```processing
//Week15_2_gopher_keyPressed 小地鼠
PImage img1, img2, img3, img4, gopher;
void setup(){//設定
  size(640,480);
  img1 = loadImage("groundhogIdle.png");
  img2 = loadImage("groundhogDown.png");
  img3 = loadImage("groundhogLeft.png");
  img4 = loadImage("groundhogRight.png");
  gopher=img1;
}
void draw(){//畫圖
  background(255);
  image(gopher, 0, 0);
}
void keyPressed(){//按下某個按鍵
  if( keyCode == DOWN) gopher=img2;
  if( keyCode == LEFT) gopher=img3;
  if( keyCode == RIGHT) gopher=img4;
}
```
## step01-3
想要控制gopher圖片放的位置, 所以利用 x y 變數 image(gopher, x,y); 來改變, 再利用 dx dy 來修改 x y 的值。按下按鍵時,修改dx dy 的值, 放開鍵盤時 keyReleased()會將 dx dy 清為0, 並將gopher圖片還原成預設的圖片

```processing
//Week15_3_gopher_keyPressed_keyReleased
PImage img1, img2, img3, img4, gopher;
void setup(){//設定
  size(640,480);
  img1 = loadImage("groundhogIdle.png");
  img2 = loadImage("groundhogDown.png");
  img3 = loadImage("groundhogLeft.png");
  img4 = loadImage("groundhogRight.png");
  gopher = img1;
}
int x=0, y=0, dx=0, dy=0;
void draw(){//畫圖
  background(255);
  image(gopher, x, y);
  x += dx;  y += dy;
}
void keyPressed(){//按下某個按鍵
  if( keyCode == DOWN) { gopher = img2; dx= 0; dy=1;}
  if( keyCode == LEFT) { gopher = img3; dx=-1; dy=0;}
  if( keyCode == RIGHT){ gopher = img4; dx=+1; dy=0;}
}
void keyReleased(){
  gopher = img1; dx=0; dy=0;
}
```
## step02-1
加上背景圖bg及土壤soil,想讓主角gopher保持在畫面的固定高度,所以y方向移動時,改去移動土壤的圖片高度,讓視覺上gopher有在移動的感覺

```processing
//Week15_4_gopher_soil8x24 小地鼠 + 土壤
PImage img1, img2, img3, img4, gopher, soil, bg;
void setup(){//設定
  size(640,480);
  img1 = loadImage("groundhogIdle.png");
  img2 = loadImage("groundhogDown.png");
  img3 = loadImage("groundhogLeft.png");
  img4 = loadImage("groundhogRight.png");
  soil = loadImage("soil8x24.png");//在Teams可載
  bg = loadImage("bg.jpg");//在Teams可載
  gopher = img1;
}
int x=300, y=0, dx=0, dy=0;
void draw(){//畫圖
  image(bg, 0, 0);//background(255);
  image(soil, 0, 160-y);//捲軸, 改成土壤往上走!!!
  image(gopher, x, 80);//本來是 image(gopher, x, y);
  x += dx;  y += dy;
}
void keyPressed(){//按下某個按鍵
  if( keyCode == DOWN) { gopher = img2; dx= 0; dy=1;}
  if( keyCode == LEFT) { gopher = img3; dx=-1; dy=0;}
  if( keyCode == RIGHT){ gopher = img4; dx=+1; dy=0;}
}
void keyReleased(){
  gopher = img1; dx=0; dy=0;
}
```

## step02-2
台科大的題目要求,土壞裡有些地方會放石頭。所以利用石頭的陣列 來標示石頭在哪裡,並且利用for迴圈在對應石頭的地方再放一張石頭的圖。其中圖片座標的算法因為有捲軸式移動, 所以要稍調整到對應的位置

```processing
//Week15_5_gopher_stone 小地鼠 + 土壤 + 石頭
PImage img1, img2, img3, img4, gopher, soil, bg;
void setup(){//設定
  size(640,480);
  img1 = loadImage("groundhogIdle.png");
  img2 = loadImage("groundhogDown.png");
  img3 = loadImage("groundhogLeft.png");
  img4 = loadImage("groundhogRight.png");
  soil = loadImage("soil8x24.png");//在Teams可載
  bg = loadImage("bg.jpg");//在Teams可載
  gopher = img1;
}
int x=300, y=0, dx=0, dy=0;
void draw(){//畫圖
  image(bg, 0, 0);//background(255);
  image(soil, 0, 160-y);//捲軸, 改成土壤往上走!!!
  image(gopher, x, 80);//本來是 image(gopher, x, y);
  x += dx;  y += dy;
}
void keyPressed(){//按下某個按鍵
  if( keyCode == DOWN) { gopher = img2; dx= 0; dy=1;}
  if( keyCode == LEFT) { gopher = img3; dx=-1; dy=0;}
  if( keyCode == RIGHT){ gopher = img4; dx=+1; dy=0;}
}
void keyReleased(){
  gopher = img1; dx=0; dy=0;
}
```
## step03-1
gopher在移動,前面做的效果是讓背景動、gopher保持畫面的位置, 以便做出24層土壤的效果。但是如果gopher已經移到最下面的6層時,土壞的圖用完了, 所以要讓gopher的位置也能再往下移, 所以設計 int y2=0 並在最下面時, 換算出 y2的值, 來調整gopher、土壞、石頭的位置。

另外網友想要有「遇到石頭時速度變慢」的效果, 所以利用 speed變數, 依照是否有石頭, 來調整是3倍速、2倍速、1倍速的效果。

```processing
//Week15_5_gopher_stone 小地鼠 + 土壤
PImage img1, img2, img3, img4, gopher, soil, bg, stone1, stone2;
int [][]stone={ //Java 的陣列 (C/C++的方括號在右邊)
  {1, 0, 0, 1, 0, 0, 0, 0},
  {0, 1, 0, 1, 0, 0, 0, 0},
  {0, 0, 1, 1, 0, 0, 0, 0},
  {0, 0, 0, 1, 0, 0, 0, 0},
  {0, 0, 0, 0, 1, 0, 0, 0},
  {0, 0, 0, 0, 0, 1, 0, 0},
  {0, 0, 0, 0, 0, 0, 1, 0},
  {0, 0, 0, 0, 0, 0, 0, 1},//1-8
  {0, 1, 1, 0, 0, 1, 1, 0},
  {1, 0, 0, 1, 1, 0, 0, 1},
  {1, 0, 0, 1, 1, 0, 0, 1},
  {0, 1, 1, 0, 0, 1, 1, 0},
  {0, 1, 1, 0, 0, 1, 1, 0},
  {1, 0, 0, 1, 1, 0, 0, 1},
  {1, 0, 0, 1, 1, 0, 0, 1},
  {0, 1, 1, 0, 0, 1, 1, 0},//9-15
  {0, 1, 2, 0, 1, 2, 0, 1},
  {1, 2, 0, 1, 2, 0, 1, 2},
  {2, 0, 1, 2, 0, 1, 2, 0},
  {0, 1, 2, 0, 1, 2, 0, 1},
  {1, 2, 0, 1, 2, 0, 1, 2},
  {2, 0, 1, 2, 0, 1, 2, 0},
  {0, 1, 2, 0, 1, 2, 0, 1},
  {1, 2, 0, 1, 2, 0, 1, 2},//17-24
};
void setup(){//設定
  size(640,480);//最後6層 6*80=480, 上面會有 (24-6)*80
  img1 = loadImage("groundhogIdle.png");
  img2 = loadImage("groundhogDown.png");
  img3 = loadImage("groundhogLeft.png");
  img4 = loadImage("groundhogRight.png");
  soil = loadImage("soil8x24.png");
  bg = loadImage("bg.jpg");
  stone1 = loadImage("stone1.png");//在Teams可載
  stone2 = loadImage("stone2.png");//在Teams可載
  gopher = img1;
}
int x=300, y=0, dx=0, dy=0;
void draw(){//畫圖
  image(bg, 0, 0);//背景的天空 background(255);
  int y2=0; //在最下面的地獄
  if( y > (24-6)*80 ) y2=y-(24-6)*80;//在最下面的地獄
  image(soil, 0, 160-y+y2);//捲軸, 改成土壤往上走!!!
  int speed=3;
  for(int i=0; i<24; i++){//左手i
    for(int j=0; j<8; j++){//右手j
      if( stone[i][j]==1 ){
        image(stone1, 80*j, 80*i+160-y+y2);
        //if(如果小地鼠的座標 與 80*j 80*i 很接近) 走慢一點
        if( dist(x,y-80, 80*j, 80*i)<40 ) speed=2;
      }else if(stone[i][j]==2){
        image(stone1, 80*j, 80*i+160-y+y2);
        image(stone2, 80*j, 80*i+160-y+y2);
        if( dist(x,y-80, 80*j, 80*i)<40 ) speed=1;
      }
    }
  }
  image(gopher, x, 80+y2);//本來是 image(gopher, x, y);
  x += dx*speed;  y += dy*speed;
}
void keyPressed(){//按下某個按鍵
  if( keyCode == DOWN) { gopher = img2; dx= 0; dy=1;}
  if( keyCode == LEFT) { gopher = img3; dx=-1; dy=0;}
  if( keyCode == RIGHT){ gopher = img4; dx=+1; dy=0;}
}
void keyReleased(){
  gopher = img1; dx=0; dy=0;
}
```