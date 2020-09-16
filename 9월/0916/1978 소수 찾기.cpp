#include <stdio.h>

int main(void)
{
	int N, cnt = 0;
	int arr[100] = {0, };
	scanf("%d", &N);
	
	for(int i = 0; i < N; i++)
	{
		scanf("%d", &arr[i]);
		
		cnt++;
		if(arr[i] == 1)
		{
			cnt--;
		}
		
		for(int j = 2; j * j < arr[i]; j++)
		{
			if(arr[i] % j == 0)
			{
				cnt--;
				break;
			}
		}
	}
	
	printf("%d", cnt);
	return 0;
}
