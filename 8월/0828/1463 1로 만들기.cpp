#include <stdio.h>

int main(void)
{
	int X, cnt = 0;
	scanf("%d", &X); 
	
	while(X != 1)
	{	
		if(X % 3 == 0){
			X /= 3;
			cnt++;
	}
		else if(X % 2 == 0)
	{
			X /= 2;
			cnt++;
	}
	else
	{
		X -= 1;
		cnt++;
	}
}
	printf("%d", cnt);
	return 0;
}
