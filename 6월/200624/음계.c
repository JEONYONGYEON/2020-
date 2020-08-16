/* 음계 
cdefgabC
입력 : 숫자  
출력 : acending, descending, mixed
*/

#include <stdio.h>

int main(void)
{
	int arr[8], i;
	int result = 0;
	
	for(i = 0; i < 8; i++)
	{
	    scanf("%d", &arr[i]);
	    
		if(arr[i] == i + 1)
	    {
            result++;
		}
		else if(arr[i] == 8-i)
		{
			result--;
		}
	}
	
	if(result == 8)
	{
		printf("ascending");
	}
	else if(result == -8)
	{
		printf("descending");
	}
	else
	{
		printf("mixed");
	}
	
	return 0;
}
