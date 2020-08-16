#include <stdio.h>

int main(void)
{
	int N, cnt = 0;
	scanf("%d", &N);
	
	while(N != 0)
	{
		cnt += N % 10;
		N /= 10; 
	}
	
	printf("%d", cnt);
	return 0;
}
