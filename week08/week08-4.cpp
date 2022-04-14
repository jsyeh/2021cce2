///Week08-4.cpp 檔案 step03-2
#include <stdio.h>
int main()
{///檔案的指標 要open          開啟方式write+
    FILE * fout=fopen("檔名.txt", "w+" );
   fprintf(fout, "Hello 我在檔案裡,哈哈\n");

    printf("Hello World\n");
}
