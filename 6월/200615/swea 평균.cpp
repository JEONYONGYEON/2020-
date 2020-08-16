#include<iostream>

using namespace std;

int main(void)
{
	int test_case;
	int T;
	cin>>T;
	
	for(test_case = 1; test_case <= T; ++test_case)
	{
		int sum = 0;
		int arr[10];
		for(int i = 0; i < 10; i++)
		{
			cin >> arr[i];
			sum += arr[i];
			if(sum % 10 >= 5)
			{
				sum += 1;
			}
		}
		sum /= 10;
		printf("#%d %d\n", test_case, sum);
	}
	return 0;
}
