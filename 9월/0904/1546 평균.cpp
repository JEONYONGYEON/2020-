#include <stdio.h>

int main(void)
{
	int N, max = 0;
	float sum = 0;
	int arr[1000] = {0,};
	
	scanf("%d", &N);
	for(int i = 0; i < N; i++)
	{
		scanf("%d", &arr[i]);
		sum += arr[i];
		if(arr[i] > max)
		{
			max = arr[i];
		}
	}
	sum = sum / max * 100 / N;
	printf("%f", sum);
}
 
 /*
 ���
 
 �ִ� M
 ��� ����-> ���� / M * 100 
 */
