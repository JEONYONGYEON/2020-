#include <stdio.h>

int dp[45] = {0,};

int fibonacci(int x)
{
	if(x == 0) return 0;
	if(x == 1) return 1;
	if(dp[x] != 0) return dp[x];
	return dp[x] = fibonacci(x-1) + fibonacci(x-2);	
}

int main(void)
{
	int num;
	scanf("%d",&num);
	printf("%d", fibonacci(num));
	
	return 0;
}
