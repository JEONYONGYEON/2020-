/*
arr�� ���� ������ ������ �� sum <= M
sum�� �ִ밪

3���� ������ ���� ��� ���ұ�?
�װ� ��� ���ұ�?
 
*/
#include <Stdio.h>

int main(void)
{
	int N, M;
	scanf("%d %d", &N, &M);
    int sum,max = 0; 
	int arr[100] = {0, };
	
	for(int i = 0; i < N; i++)
	{
		scanf("%d", &arr[i]);
	}
	
	for(int i = 0; i < N; i++){
		for(int j = i + 1; j < N; j++){
			for(int k = j + 1; k < N; k++){
				sum = arr[i] + arr[j] + arr[k];
				if(sum > max && sum <= M)
				max = sum;
			}
		}
	}
	printf("%d\n", max);
	return 0;
}
