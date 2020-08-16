#include <stdio.h>

int main(void)
{
	int N, cnt = 0;
	scanf("%d", &N);
	
	while(N != 1)
	{
	if(N % 3 == 0)
	{
		N /= 3;
		cnt++;
	}
	
	else if(N % 2 == 0)
	{
		N /= 2;
		cnt++;
	}	
	else
	{
		N -= 1;
		cnt++;
	}
	}
	printf("%d", cnt);
	return 0;
}

10 5 4 2 1
