#include <stdio.h>
int f[100];
int main()
{
	int N;
	scanf("%d", &N);

	f[0]=0;
	f[1]=1;
	for(int i=2; i<=N; i++){
		f[i] = f[i-1] + f[i-2];
		printf("f[i]: %d\n", f[i]);
	}
}
