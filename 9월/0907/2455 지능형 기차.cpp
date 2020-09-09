#include <stdio.h>

int main(void)
{
	int On[4], Off[4], max, result[4];
	
	for(int i = 0; i < 4; i++)
	{
		scanf("%d %d", &Off[i], &On[i]);
	}
	
    result[0] = On[0];
	max = result[0];
	
	for(int i = 1; i < 4; i++)
	{
		result[i] = result[i - 1] + On[i] - Off[i];
		
		if(result[i] > max)
		{
			max = result[i];
		}
	}
	printf("%d", max);
	
	return 0;
}
