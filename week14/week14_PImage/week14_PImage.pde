//week14_PImage 圖片
size(656,437);//你可依圖大小調整
//小心,圖片要先準備好,而且檔名要小心
//檔名如果存錯,就要寫那個一模一樣的錯的檔名!!
//神操作: 把程式這個窗,當成檔案總管!!! 拉進來
PImage img = loadImage("elephent.jpg");//圖檔
//你的圖檔,會在 week14_PImage的目錄
image( img, 0, 0);//在0,0的地方,畫出你的圖檔
image( img, 0, 0, 656/2, 437/2);//圖可調大小
//        座標x,y  寬度, 高度 
