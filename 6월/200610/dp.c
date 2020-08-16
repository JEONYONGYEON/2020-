#include <stdio.h>

int d[100];

int fibonacci(int x){
	if(x == 0) return 0;
	if(x == 1) return 1;
	else
	{
	return d[x] = fibonacci(x - 1) + fibonacci(x - 2);
	}
}

int main(void){
	int n;
	scanf("%d", &n);
	printf("%d", fibonacci(n));
}
