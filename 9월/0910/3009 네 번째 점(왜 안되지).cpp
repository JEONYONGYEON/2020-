#include <stdio.h>

int main(void)
{
	int x[1000] = {0, };
	int y[1000] = {0, };
	int one , two;
	
	int indexX,indexY;
	
	for(int i = 0; i < 3; i++)
	{
		scanf("%d %d", &one, &two);
		x[one]++;
		y[two]++;
	}
	
	for(int j = 1; j <= 1000; j++)
	{
		if(x[j] == 1)
		indexX = j;
	}
	
	for(int k = 1; k <= 1000; k++)
	{
		if(y[k] == 1)
		indexY = k;
	}

	printf("%d %d", indexX, indexY);
	return 0;
}
