#include <stdio.h>

int main(void)
{
	int i, j, N;
	scanf("%d", &N);
	
	for(i = 0; i < N; i++)
	{
		for(j = 0; j < N; j++)
		{
			if(i + j >= N - 1)
			{
				printf("*");
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n"); 
	}
	
	return 0;
}
