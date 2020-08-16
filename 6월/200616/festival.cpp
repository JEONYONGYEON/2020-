#include <iostream>
#include <cstdio>

int arr[1001];
int dp[1001];
int main(void)
{
	int T, N, L;
	
	scanf("%d", &T);
	while(T--)
	{
		scanf("%d %d", &N, &L);
		
		for(int i = 1; i <= N; i++)
		{
			scanf("%d", &arr[i]);
		}
		for(int i = 1;i <= N; i++)
		{
			dp[i] = dp[i - 1] + arr[i];
		}
	
	
	double min = (double)dp[L]/L;
	double check;
	for(int i = L; i<= N; i++){
		for(int k = i;k <= N; k++)
		{
			check = (double)(dp[k] - dp[k-i])/i;
			if(check < min) min = check;
		}
	}
	printf("%.10f\n", min);
    }
	return 0;
}
