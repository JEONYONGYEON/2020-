#include <stdio.h>

int main(void)
{
	int A, B, V, height, day;
	scanf("%d %d %d", &A, &B, &V);
	
	day = (V-B-1) / (A-B) + 1;
	printf("%d", day);
	
	return 0;
}
/* 손익 분기점이랑 똑같네? */
