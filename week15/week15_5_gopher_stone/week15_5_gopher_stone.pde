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
