#include <stdio.h>

int main(void)
{
	int N, result;
	scanf("%d", &N);
	
	result = N / 5;
    
    if(N % 5 != 0)
    {
		while(result != -1)
		{
			if((N - result * 5) % 3 == 0)
			{
				result += (N-result*5) / 3;
				break; 
			}
			result--;
		}
		
	}
	
	printf("%d", result);
	return 0;
}
