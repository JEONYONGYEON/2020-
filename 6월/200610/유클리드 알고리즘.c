#include <stdio.h>

int main(void)
{
	int a, b;
	scanf("%d %d", &a, &b);
	int t;
	while(b != 0){
		t = a % b;
		a = b;
		b = t;
	}
	
	printf("%d", a);
}
