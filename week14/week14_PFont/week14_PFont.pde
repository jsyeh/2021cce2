//week14_PFont
//File-Preference 改中文字型,大字形
size(300,300);
//textSize(50);
//text("中文", 50,50);//執行時變亂碼(英文字型)
PFont font = createFont("標楷體", 50);//建字型
textFont(font);//使用剛剛建好的字型
text("中文", 50,50);//正常中文字,因為字型好了
