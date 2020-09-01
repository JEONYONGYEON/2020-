#include <stdio.h>

int main(void)
{
	int N, cnt = 0;
	int arr[100] = { 0, };
	scanf("%d", &N);
	
	for(int i = 0; i < N; i++)
	{
		scanf("%d", &arr[i]);
		if(arr[i] == 3 || arr[i] == 2)
		{
			++cnt;
		}
				
		for(int j = 2; j*j < arr[i]; ++j)
			{
	     		if(arr[i] % j == 0)
	    		{
	    			break;
	    		}
	    		else
	    		{
	    			++cnt;
				}
			}
		printf("%d\n", cnt);	
	}	
	return 0;
 } 
