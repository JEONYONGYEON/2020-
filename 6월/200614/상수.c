#include <stdio.h>

int main(void)
{
	int A, B, AA, BB;
	scanf("%d %d", &A, &B);
	
	AA = 100*(A%10) + ((A/10)%10)*10 + A/100;
	BB = 100*(B%10) + ((B/10)%10)*10 + B/100;
	
	if(AA > BB)
	{
		printf("%d", AA);
	}
	else
	{
		printf("%d", BB);
	}
	
	return 0;
}
