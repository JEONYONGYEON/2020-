#include <stdio.h>

int main(void)
{
	int N, sum = 0;
	char arr[101] = {0, };
	scanf("%d %s", &N, arr);
	
	for(int i = 0; i < N; i++)
	{
		sum += arr[i] - '0';
	}
	
	printf("%d", sum);	

	return 0;
}

/*

시작 숫자 배열 입력 받을 때 arr[101]로 받아서 틀림 
*/
