///Week04-5.cpp step03-3 (因為停電, 下週再續)
///使用資料結構, 配合 sort排序, 來完成任務
#include <stdio.h>
char line[2000];
struct DATA{
	char c;
	int ans;
} lists[128];
int main()
{
	int t=1;
	while( gets(line) ){
		if(t>1) printf("\n");

		int ans[256]={};//賤招
		for(int i=0; line[i]!=0; i++){
			char c = line[i];
			ans[c]++;//字母出現1次
		}//字串的迴圈,得到每一個字母

		for(int i=0; i<128; i++){
			lists[i].c=i;
			lists[i].ans=ans[i];
		}//先把答案抄進 lists[i]裡面

		for(int i=0; i<128; i++){
			for(int j=i+1; j<128; j++){
				if(lists[i].ans>lists[j].ans || (lists[i].ans==lists[j].ans && lists[i].c<lists[j].c) ){
					struct DATA temp = lists[i];
					lists[i]=lists[j];
					lists[j]=temp;
				}
			}
		}

		for(int i=0; i<128; i++){
			if(lists[i].ans>0) printf("%d %d\n", lists[i].c, lists[i].ans );
		}

		t++;
	}
	return 0;
}
