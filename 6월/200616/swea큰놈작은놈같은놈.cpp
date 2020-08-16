#include <iostream>

using namespace std;

int main(void)
{
	int T, left, right;
	scanf("%d", &T);
	
	for(int test_case = 1; test_case <= T; test_case++)
	{
		scanf("%d %d", &left, &right);
		if(left > right)
		{
			printf("#%d >\n", test_case);
		}
		else if(left == right)
		{
			printf("#%d =\n", test_case);
		}
		else
		{
			printf("#%d <\n", test_case);
		}
	}
	return 0;
}
