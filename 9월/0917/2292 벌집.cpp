#include <stdio.h>

long long int BeeHome(long long int n)
{
	if(n == 1) return 1;
	else
	{
		return 6 * (n - 1) + BeeHome (n - 1);
    }
}

int main(void)
{
	long long int N;
	int index;
	
	scanf("%lld", &N);
	
	for(int i = 1;BeeHome(i) < N;i++)
	{
		index = i;
	}

	printf("%d", index + 1);
	return 0;
 } 
 
