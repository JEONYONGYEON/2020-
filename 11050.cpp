#include <stdio.h>

int Combination(int A, int B)
{
	if(B == 0 || A == B) return 1;
	else
	return Combination(A-1,B-1) + Combination(A-1, B);
}

int main(void)
{
	int N, K;
	scanf("%d %d", &N, &K);
	printf("%d", Combination(N, K));
	
	return 0;
}
