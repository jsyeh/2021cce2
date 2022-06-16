# Week17
程式設計 Week17 2022-06-16
1. 問問題的技巧 事件1、事件2
2. 整學期複習
3. 程式設計會考 - 示範

## step01
講解2個網路問問題相關事件

## step02

```cpp
#include <iostream>
using namespace std;

int prime( int n ){
	for( int i=2; i<n; i++ ){
		if( n%i==0 ) return 0;//not prime, bad bad bad!
	}
	return 1;//after all test, good!!!
}

int main(){
  int n;cin>>n;
  cout<<"["<<prime(n)<<"]";
  return 0;
}
/* 上方 C++ 的 main 函數 等價於 下方 C 的 main 函數
int main(void){
    int n;
    scanf("%d", &n);
    printf("[%d]", prime(n));
    return 0;
}
*/
```

```cpp
#include <iostream>
using namespace std;

int prime( int n ){
	int i;
	for( i = 2;  i <= ( n-1 ); i++){
		if( n%i==0){
			break;
		}
	}
	if( i == n ) return 1;//it is a prime
	else  return 0;//it is not a prime
}

int main(){
  int n;cin>>n;
  cout<<"["<<prime(n)<<"]";
  return 0;
}
/* 上方 C++ 的 main 函數 等價於 下方 C 的 main 函數
int main(void){
    int n;
    scanf("%d", &n);
    printf("[%d]", prime(n));
    return 0;
}
*/
```

不同,就死掉了NO
全相同,YES

```cpp
#include <stdio.h>
char line[10];
int main()
{
	scanf("%s", line);
	
	if(line[0]!=line[3]) printf("NO");
	else if(line[1]!=line[2]) printf("NO");
	else printf("YES");
	
	printf("\n");
}
```

```cpp
#include <stdio.h>
char line[10];
int main()
{
	scanf("%s", line);
	
	int bad=0;
	for(int i=0; i<4; i++){
		if( line[i] != line[3-i] ) bad=1;
	}
	
	if(bad==0) printf("YES\n");
	else printf("NO\n");
}
```

```cpp
#include <stdio.h>
int a[100];
int main()
{
	int N;
	scanf("%d", &N);
	
	for(int i=0; i<N; i++){ //i: 0,...., N-1
		scanf("%d", &a[i] );
	}
	
	for(int i=N-1; i>=0; i--){ //i: N-1... 0
		if( a[i] % 2 == 1 ) printf("%d ", a[i] );
	}
}
```

4 9 6

9 6 4

```cpp
#include <stdio.h>
int main()
{
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	
	if( a < b ){
		int temp=a; a=b; b=temp;
	}
	if( a < c ){
		int temp=a; a=c; c=temp;
	}
	
	if( b < c ){
		int temp=b; b=c; c=temp;
	}
	
	printf("%d", a*100+b*10+c + 1);
}
```
while一直讀

不用for迴圈,是因為可能有負數,不知道幾個

```cpp
#include <stdio.h>
int main()
{
	int ans=0, N;
	
	//不用for迴圈,是因為可能有負數,不知道幾個
	while(1){//while一直讀
		scanf("%d", &N);
		if(N==0) break;//0表示結束
		if(N>0) ans++;
	}
	printf("%d", ans);
}
```

```
秒數最小的,最快,超速之王

1.2km / 48秒 秒速 1秒走幾公里
60*1.2km / 48秒   60秒走幾公里
 1分鐘走幾公里
60分鐘走幾公里

60*60*1.2/min
```

```cpp
#include <stdio.h>
int main()
{
	int sec, min=99999, who;
	for(int i=1; i<=10; i++){
		scanf("%d", &sec );
		if( sec < min ){
			min = sec;
			who=i;
		}
	}
	
	int ans = 60*60*1.2/min; 
	
	//printf("sec: %d\n", min);
	printf("%d %d\n", who, ans);
}
```

```cpp
#include <stdio.h>
int a[10];
int main()
{
	for(int i=0; i<10; i++){
		scanf("%d", &a[i] );
	}
	
	for(int k=0; k<10-1; k++){//bubble
		for(int i=0; i<10-1; i++){
			if( a[i] < a[i+1] ){
				int temp=a[i];
				a[i]=a[i+1];
				a[i+1]=temp;
			}
		}
	}
	
	for(int i=0; i<10; i++){
		printf("%d ", a[i] );
	}
}
```


12
--
18

4種寫:
1. 暴力法,全試 for(int i=1; i<=a; i++) 
2. 輾轉相除法 函式呼叫函式
3. 輾轉相除法 while迴圈

```cpp
#include<iostream>
using namespace std;
int GCD(int a, int b){
  int ans;
  for(int i=1; i<=a; i++){
  	if( a%i==0 && b%i==0 ) ans=i;
  }
  return ans;
}
int main(){
  int a,b;cin>>a>>b;
  cout<<GCD(a,b)<<endl;
  return 0;
}
```

```cpp
#include<iostream>
using namespace std;
int GCD(int a, int b){
	if(a==0) return b;
	if(b==0) return a;
	return GCD( b, a%b );
}
int main(){
  int a,b;cin>>a>>b;
  cout<<GCD(a,b)<<endl;
  return 0;
}
```

```cpp#include<iostream>
using namespace std;
int GCD(int a, int b){
	
	while( a%b != 0 ){
		int c = a%b;
		a = b;
		b = c;
	}
	return b;
}
int main(){
  int a,b;cin>>a>>b;
  cout<<GCD(a,b)<<endl;
  return 0;
}
```

大位王
1. 剝皮, if一次剝一位
2. 剝皮, while一直剝
3. 當字母讀進來

```cpp
#include <stdio.h>
int main()
{
	int N;
	scanf("%d", &N);
	
	if(N<0) N = -N;
	
	if( N>10 ) N = N/10;
	if( N>10 ) N = N/10;
	if( N>10 ) N = N/10;
	
	printf("%d\n", N);
}
```

```cpp
#include <stdio.h>
int main()
{
	int N;
	scanf("%d", &N);
	
	if(N<0) N = -N;
	
	while( N>10 ) N = N/10;
	//if( N>10 ) N = N/10;
	//if( N>10 ) N = N/10;
	
	printf("%d\n", N);
}
```

```cpp
#include <stdio.h>
int main()
{
	char c;
	
	while( scanf("%c", &c )==1){
		if( c >='0' && c <='9') break;
	}
	
	printf("%c\n", c);
}
```

```cpp
#include <stdio.h>

int main()
{
	int N;
	scanf("%d", &N);
	
	int ans=0;
	for(int i=1; i<=N; i++){
		ans +=  i + 10*i;
	}
	printf("%d", ans);
}
```

scanf("%c", &c)
會讀到空格
" %c "你加了空格,就會兌掉一個空格

```cpp
#include <stdio.h>
int main()
{
	int a, b;
	char c;
	scanf("%d %c %d", &a, &c, &b);
	
	if( c=='-' ) printf("%d", a-b);
	if( c=='+' ) printf("%d", a+b);
	if( c=='*' ) printf("%d", a*b);
	if( c=='/' ) printf("%d", a/b);
}
```

質數

判斷一個數字n 是不是質數
1. 暴力法,全部都去試
for(int i=2; i<n; i++){
	//整除就不是質數
}
2. 篩子法


```cpp
#include <stdio.h>
int main()
{
	int a, b;
	scanf("%d %d", &a, &b);
	int ans=0;
	for(int n=a; n<=b; n++){
		int bad=0;
		for(int i=2; i<n; i++){
			if(n%i==0) bad=1;
		}
		if(bad==0) ans++;
	}
	printf("%d", ans);
}
```


