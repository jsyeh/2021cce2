void setup(){
  size(400,300);
}
int x=200, y=150;
void draw(){
  background(#FFFFF2);
  ellipse(x, y, 30, 30);
}
void keyPressed(){
  if( key=='a' ) x -= 2;
  if( key=='d' ) x += 2;
  if( key=='w' ) y -= 2;
  if( key=='s' ) y += 2;
}
