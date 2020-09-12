#include <stdio.h>

int main(void)
{
	int N;
	scanf("%d", &N);
	
	for(int i = 1; i <= N; i++)
    {
    	if(i % 10 == 3 || i % 10 == 6 || i % 10 == 9)
    	{
    		printf("- ");
		}
		else
		{
			printf("%d ", i);
		}
	}
}
