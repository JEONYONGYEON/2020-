#include <iostream>

int main(void)
{
	int T;
	scanf("%d", &T);
	for(int test_case = 1; test_case <= T; test_case++)
	{
		int array[10];
		for(int i = 0; i < 10; i++)
		{
			scanf("%d", &array[i]);
		}
		int max = array[0];
		for(int j = 1; j < 10; j++)
		{
			if(array[j] > max)
			{
				max = array[j];
			}
		}
		printf("#%d %d\n", test_case, max);
	}
	return 0;
}
