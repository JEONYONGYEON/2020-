#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

long long solution(long long n) {
    long long answer = 0;
    
    long long i;
	for(i = 2; i*i <= n; ++i);
	if((i-1) * (i-1) == n)
	{
		answer = i * i;
	}
    else
    {
    	answer = -1;
	}
    
	return answer;
}

int main(void)
{
	long long int n;
	scanf("%lld", &n);
	printf("%lld", solution(n));
}

/*
임의의 양의 정수 n 에 대해,
n이 어떤 양의 정수 x의 제곱인지 아닌지 판단하려 합니다.

n이 양의 정수 x의 제곱이라면
x+1의 제곱을 리턴하고,

n이 양의 정수 x의 제곱이 아니라면
-1을 리턴하는 함수를 작성하세요
*/
