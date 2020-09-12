#include <stdio.h>

int main(void)
{
	long long int N, M, result;
	scanf("%lld %lld", &N, &M);
	
	result = N - M;
	if(result < 0)
	{
		result *= -1;
	}
	
	printf("%lld", result);
	
	return 0;
}
