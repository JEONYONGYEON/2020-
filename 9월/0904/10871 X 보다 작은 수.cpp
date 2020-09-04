#include <stdio.h>

int main(void)
{
	int N, X;
	scanf("%d %d", &N, &X);
	int arr[10000] = { 0, };
	
	for(int i = 0; i < N; i++)
	{
		scanf("%d", &arr[i]);
		if(arr[i] < X)
		{
			printf("%d ", arr[i]);
		}
	}
	
	return 0;
}
