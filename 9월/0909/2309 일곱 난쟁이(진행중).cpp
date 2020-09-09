#include <stdio.h>

int main(void)
{
	int arr[9], sum = 0, temp;
	for(int i = 0; i < 9; i++)
	{
		scanf("%d", &arr[i]);
		sum += arr[i];
	}
	
	for(int i = 0; i < 8; i++){
		for(int j = i+1; j < 9; j++) {
		if(sum - (arr[i] + arr[j]) == 100){
			arr[i] = -1;
			arr[j] = -1;
		}
	}
	}
	
	
	for(int i = 8; i > 1; i --){
		for(int j = i; j < 7; j++)
		if(arr[i] < arr[i + 1]){
			temp = arr[i];
			arr[i] = arr[i + 1];
			arr[i + 1] = temp;
		}
	}
	
	for(int k = 2; k > 8; k++)
	{
		printf("%d\n", arr[k]);
	}
	return 0;
}
