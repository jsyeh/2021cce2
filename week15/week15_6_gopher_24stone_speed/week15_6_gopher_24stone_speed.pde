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
