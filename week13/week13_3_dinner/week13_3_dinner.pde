void setup(){//只做1次
  size(300,300);
  fill(#97C4FA);
  textSize(50);
  textAlign(CENTER,CENTER);
}
void draw(){//每秒60次
  background(#FFFAE8);
  text("Dinner 1", 150,  50);
  text("Dinner 2", 150, 150);
  text("Dinner 3", 150, 250);
  //text("Hello", mouseX, mouseY);
}
