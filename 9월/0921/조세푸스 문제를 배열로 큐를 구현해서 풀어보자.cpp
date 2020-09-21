#include <stdio.h>

int main(void)
{
    int N, K, arr[5000];
    scanf("%d %d", &N, &K);
    
    for(int i = 0; i < N; i++)
    {
    	arr[i] = i + 1;
	}
	
	for(int j = 0; j < K - 1; j++)
	{
		arr[N + 1] = arr[j];
		arr[j]
	}

    
	return 0;
}
