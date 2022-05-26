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
