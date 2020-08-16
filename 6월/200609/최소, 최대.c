#include <stdio.h>

int main(void)
{
	int i, j, N, min, max;
	scanf("%d", &N);
	int array[N];
	
	for(i = 0; i < N; i++)
	{
		scanf("%d", &array[i]);
	}
	
	min = array[0];
	max = array[0];
	
	for(j = 1; j < N; j++)
	{
		if(array[j] < min) min = array[j];
		if(array[j] > max) max = array[j];
	}
	printf("%d %d", min, max);
	
	return 0;
 } 
 
 /*
 min,max 배열 첫번째 값으로 초기화할때 for문 밖에서 
 */
