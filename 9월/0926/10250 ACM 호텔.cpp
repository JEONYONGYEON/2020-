#include <stdio.h>

int main(void)
{
	int T, H, W, N;
	scanf("%d", &T);
	
	for(int test_case = 0; test_case < T; test_case++)
	{
		int floor;
		int roomNumber;		
		scanf("%d %d %d", &H, &W, &N);
			
		if(N % H != 0)
		{
		    floor = N % H;
		    roomNumber = N / H + 1;
		}
		
		else
		{
			floor = H;
		    roomNumber = N / H;
		}
		
	   	printf("%d%02d\n", floor, roomNumber);
	}
	
	return 0;
 }
 
