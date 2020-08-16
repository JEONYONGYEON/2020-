#include <stdio.h>

int main(void)
{
	int T, i;
	int sum;
	int index = 1;
	int arr[10];
	scanf("%d", &T);
	
	while(T-- != 0)
	{
		sum = 0;
		for(i = 0; i < 10; i++)
		{
			scanf("%d", &arr[i]);
			if(arr[i]%2 != 0)
			{
				sum += arr[i];
			}
		}
		printf("#%d %d\n", index, sum);
		index++; 
	}
	
	return 0;
}
