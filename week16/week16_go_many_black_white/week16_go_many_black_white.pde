//week16 go many black white
//程式要變成 p5.js 網頁版,有幾個步驟 (0) Java程式先寫好
//(1) copy程式, 貼到 https://pde2js.herokuapp.com/
//(2) 把網頁右邊的程式碼, 貼到剛剛開的 p5.js 視窗
//(3) 按執行,會跳出 127.0.0.1 的本機臨時網頁
//(4) 另存新檔 go (碁) 小心, index.html 第8行改 go.js
//(5) 登入 GitHub, 開你的 帳號.github.io 的repo倉庫
//(6) Add 把 go 目錄拉上去, 等5分鐘,便可 帳號.github.io/go 
void setup(){
  size(450,450);
}
int []bx=new int[100]; //在 Java 的陣列
int []by=new int[100]; //和C/C++/C#不同
int N=0; //現在有 N 的棋子
void draw(){
  background(#F5D665);
  for(int y=50; y<450; y+=50){
    line(0, y, 450, y);
  }
  for(int x=50; x<450; x+=50){
    line(x, 0, x, 450);
  }
  for(int i=0; i<N; i++){
    if(i%2==0) fill(0);//2倍數,黑
    else fill(255); //白
    ellipse( bx[i], by[i], 40, 40);
  }
  if(N%2==0) fill(0);//2倍數,黑
  else fill(255); //白
  ellipse( mouseX, mouseY, 40,40);
}
void mousePressed(){
  bx[N]=mouseX; by[N]=mouseY;
  N++;
}
