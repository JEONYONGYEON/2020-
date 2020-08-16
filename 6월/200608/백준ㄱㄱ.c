#include <stdio.h>

int main(void)
{
	int N, i, num;
	int sum = 0;
	scanf("%d %d", &N, &num);
	int array[N];
	
	for(i = 0; i < N; i++)
	{
		array[i] = num % 10;
		sum += array[i];
		num /= 10;
	}
	printf("%d", sum);
	
	return 0;
}
