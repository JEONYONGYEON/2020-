#include <stdio.h>
#include <math.h>

int main(void)
{
	int arr[10], sum = 0, i;
	
	for(i = 0; i < 10; i++)
	{
		scanf("%d", arr + i);
	}
	
	for(i = 0; i < 10; i++){
		if(abs(sum + arr[i] - 100) <= abs(sum - 100)){
			sum += arr[i];
		}
		else
		{
			break;
		}
	}
	
	printf("%d", sum);
	
	return 0;
}
