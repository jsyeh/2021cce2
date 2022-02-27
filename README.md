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


