#include <stdio.h>

int main(void)
{
	int T;
	scanf("%d", &T);

	char OX[81];	
	for(int test_case = 1; test_case <= T; test_case++)
	{	
	    scanf("%s", OX);
	    int score = 0, cnt = 1;
	    for(int i = 0; OX[i] != '\0'; i++)
		{
			if(OX[i] == 'O')
			{
				score += cnt;
				cnt++; 
			}
			else if(OX[i] == 'X')
			{
				cnt = 1;
			}
		}
		printf("%d\n", score);		
	}
	
	return 0;
 } 
