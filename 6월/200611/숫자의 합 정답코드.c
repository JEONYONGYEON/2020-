#include <stdio.h>

int main(void)
{
	int input, i, sum = 0;
	char inArr[101] = {0, };
	scanf("%d", &input);
	scanf("%s", inArr);
	
	for(i = 0; i < input; i++)
	{
	    sum += inArr[i] - 48;	
	}	
	printf("%d", sum);
	
	return 0;
}
