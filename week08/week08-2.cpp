///Week08-2.cpp step02-2 �ɮ�
#include <stdio.h>
int grades[3];///step02-2�}�C
int main()
{///���]��3�����
    int grade;
    for(int i=0; i<3; i++){
        scanf("%d", &grade);
        grades[i] = grade;
    }

    for(int i=0; i<3; i++){
        printf("%d\n", grades[i] );
    }

}
