#include <stdio.h>

int main(void)
{
	int arr[4], cnt = 0;
		
	for(int j = 0; j < 3; j++)
	{
		for(int i = 0; i < 4; i++)
		{
			scanf("%d", &arr[i]);
			cnt += arr[i];
		}
		
		switch(cnt)
		{
			case 1:
				printf("C\n");
				break;
			case 2:
			    printf("B\n");
		    	break;
			case 3:
			    printf("A\n");
			    break;
			case 0:
				printf("D\n");
				break;
			case 4:
				printf("E\n");
				break;
		}
		cnt = 0;
	}
	
	return 0;
 } 
