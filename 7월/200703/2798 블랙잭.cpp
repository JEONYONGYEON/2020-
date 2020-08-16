/*
arr의 원소 세개를 더했을 때 sum <= M
sum의 최대값

3개의 원소의 합을 어떻게 구할까?
그걸 어떻게 비교할까?
 
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
