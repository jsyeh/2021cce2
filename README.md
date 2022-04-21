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