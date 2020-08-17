#include <stdio.h>

int main(void)
{
	int N;
	scanf("%d", &N);
	
	while(N != 0)
	{
		printf("%d ", N);
		N--;
		if(N == 0) 
		{
			printf("%d", 0);
			break;
		} 
	}
	
	return 0;
}
