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
