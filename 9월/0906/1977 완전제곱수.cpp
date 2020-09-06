#include <stdio.h>

int main(void)
{
	int N, M, result, sum = 0, min = 0;
	scanf("%d %d", &N, &M);
	
	for(int i = 1; i*i <= M; i++)
	{
		result = i * i;
		
		if(result >= N)
		{
			sum += result;
		}

		if((i-1) * (i-1) < N)
		{
	        min = result;	
		}
	}
	
	if(sum == 0)
	{
		printf("%d", -1);
	}
	else
	{
	    printf("%d\n%d", sum, min);	
	}
	return 0;
}
