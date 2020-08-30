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
������ ���� ���� n �� ����,
n�� � ���� ���� x�� �������� �ƴ��� �Ǵ��Ϸ� �մϴ�.

n�� ���� ���� x�� �����̶��
x+1�� ������ �����ϰ�,

n�� ���� ���� x�� ������ �ƴ϶��
-1�� �����ϴ� �Լ��� �ۼ��ϼ���
*/
