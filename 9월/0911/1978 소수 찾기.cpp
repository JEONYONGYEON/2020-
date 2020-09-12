#include <stdio.h>

int main(void)
{
	int N, result = 0;
	scanf("%d", &N);
	int arr[100] = {0, };
	
	for(int i = 0; i < N; i++)
	{
		scanf("%d", &arr[i]);
		int cnt = 0;
		for(int j = 1; j <= arr[i]; j++)
		{
			if(arr[i] % j == 0)
			{
				cnt++;
			}			
		}
		if(cnt == 2)
		{
			result++;
		}
	}
	
	printf("%d", result);
	
	return 0;
}
