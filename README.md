# 2021cce2
資傳一乙程式設計二（2022春）

授課教師：銘傳大學葉正聖

教學的範圍是精簡後的C/C++部分，希望用簡單的內容、逐序漸進的教學，讓大家喜歡寫程式，並建立程式設計的基礎。利用螺旋式的教法（Spirial Teaching Method）慢慢增加工具，每週上課3小時，利用5-6個小的課堂作業，逐步建立輔助學習的鷹架，每次增加3-5行程式方便理解。配合瘋狂程設的練習，讓大家能自己在練習中熟悉程式設計。

上學期（程式設計一）先教C語言的簡單程式設計的內容，語法包含int main()主函式、Standard Input/Output標準輸入輸出、變數、運算、if(判斷)、for(迴圈)、陣列、函式、字串。下學期（程式設計二）將教剩下的語法，包含結構、指標、檔案等。除了C/C++共通的部分，下學期還會多一點C++的部分，包含cin/cout，Standard Template Library等。

使用的工具有：CodeBlocks 17.12 MinGW，瘋狂程設，GitHub

# 每週上課內容
## Week01 第01週上課內容
程式設計二 Week01 2022-02-24
0. What學什麼? Why為何學? How如何學?
1. 主題: 史上最多2的一天 (最有愛的日子)
2. 複習: scanf()讀入整數、字元、字串
3. 複習: if(判斷) for(迴圈) 配合陣列
4. 複習: 字串函式
5. 實作: 最多2的一天 (下週考試)
6. 進階: UVA401 Palindromes (上學期的迴文)

本學期將使用 新版瘋狂程設-mcu02圓山碼場
0. Chrome登入 mcu02.arping.me, 加選課程 16102 資傳一乙
1. 下載軟體,解壓縮!!! (沒有zip拉鏈) 點擊 小黑 (會跳出軟體)
2. 登入軟體(圓山碼場)

## 將上課內容上傳GitHub

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


