#include <stdio.h>

int solution(int n)
{
	if(n == 1) return;
	
	else if (n % 2 != 0) return f(n*3 + 1);
	else return f(n / 2);
}

int main(void)
{
	return 0;
}

/*
어캐하는지 모르겠다리 
*/
