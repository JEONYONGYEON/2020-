#include <stdio.h>

int main(void)
{
	while(1)
	{
		int A, B, C;
		scanf("%d %d %d", &A, &B, &C);
		
		if(A == 0 && B == 0 && C == 0)
		{
			break;
		}
		
		if(A*A == B*B + C*C || B*B == A*A + C*C || C*C == A*A + B*B)
		{
			printf("right\n");
		}
		else
		{
			printf("wrong\n");
		}		
	}	
	return 0;
}
