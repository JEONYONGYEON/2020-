#inclue <stdio.h> 

int main(void)
{
	int N, M;
	scanf("%d %d", &N, &M);
	int sum, max = 0;
	
	int arr[100] = {0, };
	for(int i = 0; i < N; i++)
	{
		scanf("%d", &arr[i]);
	}
	
	for(int i = 0; i < N; i++)
	{
		for(int j = i + 1; j < N; j++)
		{
			for(int k = j + 1; j < N; k++)
			{
				if(sum > max && sum <= M)
				{
					max = sum;
				}
				}
			}
		}
	}
	
	return 0;
}
