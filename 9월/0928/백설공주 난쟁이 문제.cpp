#include <stdio.h>

int main(void)
{
	int arr[9], sum = 0;
	int sub, subb;
	
	for(int i = 0; i < 9; i++)
	{
		scanf("%d", &arr[i]);
		sum += arr[i];
	}
	
	for(int j = 0; j <9; j++)
	{
		for(int k = j + 1; k < 9; k++)
		{
			if(sum - (arr[j] + arr[k]) == 100)
			{
				sub = arr[j]
			}	
		}
	}
	
	return 0;
 } 
