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

���� ���� �迭 �Է� ���� �� arr[101]�� �޾Ƽ� Ʋ�� 
*/
