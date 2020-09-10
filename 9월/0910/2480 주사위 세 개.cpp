#include <stdio.h>

int main(void)
{
	int arr[3], result, max = 0;
	
	for(int i = 0; i < 3; i++)
	{
		scanf("%d", &arr[i]);
	}
		
	if(arr[0] == arr[1] && arr[0] == arr[2]){
		result = 10000 + 1000 * arr[0]; 
	}
	else if(arr[0] == arr[1] || arr[1] == arr[2]){
		result = 1000 + arr[1] * 100;
	}
	else if(arr[0] == arr[2])
	{
		result = 1000 + arr[0] * 100;
	}
	
	else
	{
		for(int i = 0; i < 3; i++)
		{
			if(arr[i] > max)
			{
				max = arr[i];
			}
		}
		result = max * 100;
	}
	
	printf("%d", result);
	return 0;
}
