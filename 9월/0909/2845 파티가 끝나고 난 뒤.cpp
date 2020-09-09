#include <stdio.h>

int main(void)
{
	int L, P, result, arr[5];
	scanf("%d %d", &L, &P);
	result = L * P;

    for(int i = 0; i < 5; i++)
    {
    	scanf("%d", &arr[i]);
	}
	
	for(int j = 0; j < 5; j++)
	{
		printf("%d ", arr[j] - result);
	}
	return 0;
}
