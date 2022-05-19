// 步驟1: 右上角 Java 改 p5.js
// 步驟2: week13_5_dinner_random 程式 去轉檔
// https://pde2js.herokuapp.com/ 貼在左邊, 按 Convert
// 步驟3: 把右邊程式碼, 貼到 Processing p5.js 這個窗
// Run 會跑出來哦!
// 步驟4: 把程式存檔成 桌面的 week13 把它放上 GitHub
// https://github.com/你的帳號/你的帳號.github.io
// 你之後可以在 https://你的帳號.github.io/week13 看到你程式上網了!!!

function setup() {
    initializeFields();
    // 只做1次
    createCanvas(300, 300);
    fill(color(0x97, 0xC4, 0xFA));
    textSize(50);
    textAlign(CENTER, CENTER);
}

// -1沒選, 0,1,2有選
var choice;

function draw() {
    // 每秒60次
    background(color(0xFF, 0xFA, 0xE8));
    text("Dinner 1", 150, 50);
    text("Dinner 2", 150, 150);
    text("Dinner 3", 150, 250);
    if (choice == 0)
        ellipse(30, 50, 50, 50);
    if (choice == 1)
        ellipse(30, 150, 50, 50);
    if (choice == 2)
        ellipse(30, 250, 50, 50);
}

function mousePressed() {
    // 當mouse按下去時
    // 取出整數0,1,2
    choice = int(random(3));
}

function initializeFields() {
    choice = -1;
}
