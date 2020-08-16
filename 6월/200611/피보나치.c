#include <stdio.h>

unsigned long long int d[91];

unsigned long long int Solution(int x)
{
	if(x == 1) return 1;
	if(x == 2) return 1;
	if(d[x] != 0) return d[x];
	return d[x] = Solution(x - 1) + Solution(x - 2);
}

int main(void)
{
	unsigned long long int n;
	scanf("%llu", &n);
	printf("%llu", Solution(n));
	
	return 0;
 } 
