void setup(){//只做1次
  size(300,300);
  background(#FFFAE8);
  fill(#97C4FA);
  textSize(50);
}
void draw(){//每秒60次
  text("Hello", mouseX, mouseY);
}
