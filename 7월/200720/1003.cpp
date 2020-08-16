#include <iostream>

using namespace std;


int zero, one;
	
int fibonacci(int n){
	
	if(n == 0)
	{
		zero++;
		return 0;
	}
	else if(n == 1)
	{
		one++;
		return 1;
	}
	else
	{
		return fibonacci(n-1) + fibonacci(n-2);
	}
}

int main(void)
{
	int T;
	scanf("%d", &T);
	
	for(int test_case = 0; test_case < T;test_case++)
	{
		zero = 0;
		one = 0;
		int data;

		scanf("%d", &data);
		fibonacci(data);
		printf("%d %d\n", zero, one);
	}
	
	return 0;
}
