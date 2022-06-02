//Week15_1_gopher 小地鼠
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
