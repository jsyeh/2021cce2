PShape gundam;
void setup(){
  size(500,500,P3D);
  gundam = loadShape("Gundam.obj");//小心大小寫
}
void draw(){
  background(128);
  //倒過來,要再倒回來....
  translate(250, 250); //往右移一半250
  scale(20, -20, 20);//放大20倍,看到左半邊
  rotateY( radians(frameCount) );//要放在下面
  shape(gundam); //太小了!!!
}
