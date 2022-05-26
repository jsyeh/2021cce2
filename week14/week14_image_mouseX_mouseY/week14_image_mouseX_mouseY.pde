//week14_image_mouseX_mouseY 互動
PImage img;//在外面宣告, 才能在 setup()及draw()
void setup(){//設定
  size(500,300);
  img = loadImage("image.png");
}//可用任何你想要畫的圖!!! 放到你的程式目錄
void draw(){//畫圖,每秒60次
  image(img, mouseX, mouseY);
}
