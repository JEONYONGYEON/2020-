#include <stdio.h>

int main(void)
{
	int H, M;
    scanf("%d %d", &H, &M);
    
    M -= 45;
    if(M - 45 < 0)
    {
    	H--;
    	if(H < 0)
    	{
    		H += 24;
		}
    	M += 60;
	}
	
	printf("%d %d", H, M);
}

